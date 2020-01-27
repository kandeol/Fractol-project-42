/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:09:11 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/21 19:31:18 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*dst;
	char		*to_find;
	size_t		size;

	dst = (char*)haystack;
	to_find = (char*)needle;
	size = ft_strlen(needle);
	if (!*dst)
		return (0);
	if (!*to_find)
		return ((char*)haystack);
	while (size <= len && *dst != '\0')
	{
		if (ft_strncmp(dst, to_find, size) == 0)
		{
			return (dst);
		}
		dst++;
		len--;
	}
	return (NULL);
}
