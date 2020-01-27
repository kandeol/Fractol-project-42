/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:45:46 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 10:50:49 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*n_list;

	n_list = NULL;
	while (lst)
	{
		ft_lstaddtoend(&n_list, f(lst));
		lst = lst->next;
	}
	return (n_list);
}
