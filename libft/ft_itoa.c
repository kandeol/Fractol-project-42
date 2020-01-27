/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:48:48 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 19:40:50 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_count_len(int n, int neg)
{
	unsigned int	len;

	len = 1;
	if (neg == 1)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void		ft_copy(char *str, int n, int len)
{
	if (n < 0)
		n = -n;
	while (len >= 0)
	{
		str[len--] = (n % 10) + '0';
		n = n / 10;
	}
}

char			*ft_itoa(int n)
{
	int				neg;
	int				len;
	char			*str;

	neg = 0;
	if (n < 0)
		neg = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count_len(n, neg);
	str = (char*)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	ft_copy(str, n, len);
	if (neg == 1)
		str[0] = '-';
	return (str);
}
