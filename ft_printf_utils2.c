/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataai <ataai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:08:20 by ataai             #+#    #+#             */
/*   Updated: 2024/12/01 21:08:21 by ataai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *counter)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		(*counter) += 6;
	}
	else
	{
		write(1, str, ft_strlen(str));
		(*counter) += ft_strlen(str);
	}
}

void	ft_putchar(const char c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_unsigned_putnbr(unsigned int n, int *counter)
{
	if (n == 0)
	{
		write(1, "0", 1);
		(*counter)++;
		return ;
	}
	if (n / 10 > 0)
		ft_unsigned_putnbr(n / 10, counter);
	ft_putchar(n % 10 + '0', counter);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
