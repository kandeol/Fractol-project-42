/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:38:12 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/09 14:26:55 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	char	nb;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n = 147483648;
		}
		else
		{
			n = n * -1;
		}
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		nb = n % 10 + '0';
		ft_putchar(nb);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
