/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:00:18 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 18:50:53 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	if (!begin_list || !data_ref || !(*cmp))
		return (NULL);
	list = begin_list;
	while (list)
	{
		if (cmp(list->content, data_ref) == 0)
			return (list);
		list = list->next;
	}
	return (NULL);
}
