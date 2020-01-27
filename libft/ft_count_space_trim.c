/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_space_trim.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:16:59 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 18:58:53 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_space_trim(char const *s)
{
	unsigned int	size_s;
	unsigned int	i;

	i = 0;
	size_s = 0;
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		size_s++;
		i++;
	}
	if (s[i] == '\0')
		return (size_s);
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		size_s++;
		i--;
	}
	return (size_s);
}
