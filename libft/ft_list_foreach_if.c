/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:29:00 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 18:57:00 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*list;

	if (!begin_list || !(*f) || !data_ref ||
		!(*cmp))
		return ;
	list = begin_list;
	while (list)
	{
		if (cmp(list->content, data_ref) == 0)
			f(list->content);
		list = list->next;
	}
}
