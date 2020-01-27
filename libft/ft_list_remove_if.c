/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:39:57 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 18:56:09 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	if (!begin_list || !data_ref || !(*cmp))
		return ;
	list = begin_list;
	while (list)
	{
		if (cmp(list->content, data_ref) == 0)
			free(list->content);
		list = list->next;
	}
}
