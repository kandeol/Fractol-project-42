/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 16:49:28 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/18 19:46:23 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*dst_c;
	unsigned char			*src_c;

	dst_c = (unsigned char*)dst;
	src_c = (unsigned char*)src;
	i = 0;
	while (i++ < n)
	{
		if ((*dst_c++ = *src_c++) == (unsigned char)c)
			return (dst_c);
	}
	return (NULL);
}
