/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:13:09 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/21 17:26:17 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char*)dst;
	src_c = (unsigned char*)src;
	if (src_c < dst_c)
	{
		dst_c = dst_c + (len - 1);
		src_c = src_c + (len - 1);
		while (len > 0)
		{
			*dst_c-- = *src_c--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*dst_c++ = *src_c++;
			len--;
		}
	}
	return (dst);
}
