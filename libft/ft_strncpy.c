/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:15:30 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/09 19:19:56 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;
	int				end;

	i = 0;
	end = 0;
	while (i < len)
	{
		if (end == 1)
			dst[i] = '\0';
		else if (!(dst[i] = src[i]))
			end = 1;
		i++;
	}
	return (dst);
}
