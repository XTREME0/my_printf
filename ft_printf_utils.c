/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataai <ataai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:08:05 by ataai             #+#    #+#             */
/*   Updated: 2024/12/01 21:08:06 by ataai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *counter)
{
	long int	n;
	char		c;

	if (num == 0)
	{
		write(1, "0", 1);
		(*counter)++;
		return ;
	}
	n = num;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		(*counter)++;
	}
	if (n / 10 > 0)
		ft_putnbr(n / 10, counter);
	c = n % 10 + '0';
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putnbr_hex(unsigned int n, int *counter)
{
	char	*base;
	char	c;

	base = "0123456789abcdef";
	if (n / 16 > 0)
		ft_putnbr_hex(n / 16, counter);
	c = base[n % 16];
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putnbr_caphex(unsigned int n, int *counter)
{
	char	*base;
	char	c;

	base = "0123456789ABCDEF";
	if (n / 16 > 0)
		ft_putnbr_caphex(n / 16, counter);
	c = base[n % 16];
	write(1, &c, 1);
	(*counter)++;
}

static void	ft_putaddr_hex(size_t n, int *counter)
{
	char	*base;
	char	c;

	base = "0123456789abcdef";
	if (n > 15)
		ft_putaddr_hex(n / 16, counter);
	c = base[n % 16];
	write(1, &c, 1);
	(*counter)++;
}

void	print_addr(void *pp, int *counter)
{
	write(1, "0x", 2);
	(*counter) += 2;
	ft_putaddr_hex((size_t)pp, counter);
}
