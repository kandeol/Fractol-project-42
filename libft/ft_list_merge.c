/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:03:05 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 14:43:25 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (begin_list1 == NULL || begin_list2 == NULL)
		return ;
	while (*begin_list1)
		(*begin_list1) = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
}
