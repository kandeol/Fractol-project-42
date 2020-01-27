/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:15:36 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/16 11:10:53 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*tmp;

	tmp = (char*)malloc(sizeof(*tmp) * size);
	if (!tmp)
		return (0);
	ft_bzero(tmp, size);
	return ((void*)tmp);
}
