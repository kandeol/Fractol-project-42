/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:28:21 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 12:16:30 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_copy_word(const char *str, char *str_t, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		str_t[i] = str[i];
		i++;
	}
	str_t[i] = '\0';
}

static int		ft_size(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void		*ft_split(char **str_t, char const *s, char c)
{
	unsigned int	i;
	unsigned int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			str_t[w] = (char*)malloc(sizeof(*str_t[w]) * ft_size(&s[i], c) + 1);
			if (!str_t[w])
				return (NULL);
			ft_copy_word(&s[i], str_t[w++], c);
			i = ft_size(&s[i], c) + i;
		}
		else
			i++;
	}
	str_t[w] = 0;
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str_t;

	if (!s)
		return (0);
	str_t = (char**)malloc(sizeof(*str_t) * (ft_count_word(s, c) + 1));
	if (!str_t)
		return (NULL);
	ft_split(str_t, s, c);
	return (str_t);
}
