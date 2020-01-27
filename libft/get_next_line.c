/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 19:46:18 by kandeol           #+#    #+#             */
/*   Updated: 2018/03/16 15:14:48 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_list(t_lst **list, int fd, t_lst **ret)
{
	t_lst *tmp;
	t_lst *beg;

	*ret = *list;
	beg = (*list);
	while (*list)
	{
		if ((*list)->fd == fd)
			return (1);
		*list = (*list)->next;
	}
	if (!(tmp = (t_lst*)malloc(sizeof(t_lst))))
		return (-1);
	tmp->str = ft_strnew(0);
	tmp->fd = fd;
	tmp->end = 0;
	tmp->next = beg;
	*list = tmp;
	*ret = *list;
	return (1);
}

int		read_fd(t_lst **list, int *index_back, int *size_line)
{
	char	*buff;
	char	*to_free;

	*index_back = 0;
	*size_line = 0;
	if (!(buff = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	while (((*size_line = read((*list)->fd, buff, BUFF_SIZE)) > 0))
	{
		buff[*size_line] = '\0';
		to_free = (*list)->str;
		(*list)->str = ft_strjoin((*list)->str, buff);
		free(to_free);
		*index_back = ft_strlenchr((*list)->str, '\n');
		if ((*list)->str[*index_back] == '\n')
			break ;
	}
	free(buff);
	if (*size_line == -1)
		return (-1);
	return (1);
}

int		create_line(int *index_back, t_lst **list, char **line, int *size_line)
{
	char	*tmp;

	*index_back = ft_strlenchr((*list)->str, '\n');
	if ((*list)->end == 1 || (*index_back == 0 && (*list)->str[0] != '\n'))
	{
		tmp = (*list)->str;
		(*list)->str = ft_strnew(0);
		free(tmp);
		return (0);
	}
	if ((*list)->str[0] == '\n')
		*line = ft_strnew(0);
	else if (*index_back > 0)
		*line = ft_strsub((*list)->str, 0, *index_back);
	if (*size_line == 0 && (((*list)->str[*index_back] == '\0')))
		(*list)->end = 1;
	else
	{
		tmp = (*list)->str;
		(*list)->str = ft_strsub((*list)->str, *index_back + 1,
				ft_strlen(&((*list)->str[*index_back + 1])));
		free(tmp);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_lst		*list;
	int					index_back;
	t_lst				*ret;
	int					size_line;

	if (fd < 0 || !line)
		return (-1);
	if (!list)
	{
		if (!(list = (t_lst*)malloc(sizeof(t_lst))))
			return (-1);
		list->str = ft_strnew(0);
		list->fd = fd;
		list->end = 0;
		list->next = NULL;
	}
	if (!(check_list(&list, fd, &ret)))
		return (-1);
	if (read_fd(&list, &index_back, &size_line) == -1)
		return (-1);
	if (create_line(&index_back, &list, line, &size_line) == 0)
		return (0);
	list = ret;
	return (1);
}
