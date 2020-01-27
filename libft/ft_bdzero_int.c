/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bdzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:04:05 by kandeol           #+#    #+#             */
/*   Updated: 2018/03/16 17:43:07 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		ft_bdzero_int(float **s, size_t w, size_t h)
{
	int				i;
	int				j;
	size_t			size_w;
	size_t			size_h;

	i = 0;
	j = 0;
	size_w = w;
	size_h = h;
	if (w == 0 || h == 0)
		return ;
	while (size_h--)
	{
		while (size_w--)
		{
			s[i][j] = 0;
			j++;
		}
		size_w = w;
		i++;
		j = 0;
	}
}
