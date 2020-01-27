/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:55:14 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/18 19:47:00 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		while (((unsigned char*)s)[i])
			((unsigned char*)s)[i] = '\0';
		i++;
	}
}
