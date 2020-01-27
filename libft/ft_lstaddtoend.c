/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtoend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:49:43 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 10:55:41 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddtoend(t_list **alst, t_list *new)
{
	t_list	*list;

	if (*alst && alst && new)
	{
		list = *alst;
		while (list->next)
			list = list->next;
		list->next = new;
		list->next->next = NULL;
	}
	else if (!(*alst))
	{
		*alst = new;
		(*alst)->next = NULL;
	}
}
