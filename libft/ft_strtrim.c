/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:22:27 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 18:18:41 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_s;
	char			*str;

	i = 0;
	j = 0;
	size_s = 0;
	if (!s)
		return (NULL);
	size_s = ft_count_space_trim(s);
	str = (char*)malloc(sizeof(*str) * ft_strlen(s) - size_s + 1);
	if (!str)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < (ft_strlen(s) - size_s))
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
