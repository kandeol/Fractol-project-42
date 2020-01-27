/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:27:01 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/15 17:02:17 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!needle[j])
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i] && (needle[j]))
		{
			j++;
			i++;
		}
		if (!needle[j])
			return ((char*)haystack + (i - j));
		i = (i - j) + 1;
		j = 0;
	}
	return (0);
}
