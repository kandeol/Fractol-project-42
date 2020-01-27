/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:29:46 by kandeol           #+#    #+#             */
/*   Updated: 2018/01/10 12:15:00 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s)
	{
		str = (char*)malloc(sizeof(*str) * len + 1);
		if (!str)
			return (0);
		while (i < len)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}
