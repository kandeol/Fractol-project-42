/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:01:38 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/10 16:55:34 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen;

	i = 0;
	j = 0;
	strlen = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] && (i < size - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (strlen + (i - j));
	}
	return (i + strlen);
}
