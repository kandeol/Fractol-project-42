/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:48:27 by kandeol           #+#    #+#             */
/*   Updated: 2017/11/09 14:27:23 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = 147483648;
		}
		else
		{
			n = n * -1;
		}
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		nb = n % 10 + '0';
		ft_putchar_fd(nb, fd);
	}
	else
	{
		ft_putchar_fd((n + '0'), fd);
	}
}
