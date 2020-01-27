/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:35:07 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/14 18:34:46 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char*)b)[i] != (unsigned char)c)
			((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
