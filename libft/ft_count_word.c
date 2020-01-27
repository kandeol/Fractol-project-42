/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:13:02 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/24 14:29:14 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(const char *str, char c)
{
	int	nbr_words;
	int	i;

	i = 0;
	nbr_words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			nbr_words++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (nbr_words);
}
