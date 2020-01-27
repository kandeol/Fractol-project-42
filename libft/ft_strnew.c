/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:38:45 by kandeol           #+#    #+#             */
/*   Updated: 2017/12/27 11:47:07 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (!(tmp = (char*)malloc(sizeof(*tmp) * (size + 1))))
		return (NULL);
	ft_bzero(tmp, size);
	tmp[size] = '\0';
	return (tmp);
}
