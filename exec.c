/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataai <ataai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:08:14 by ataai             #+#    #+#             */
/*   Updated: 2024/12/01 21:08:15 by ataai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	exec_param(const char *str, va_list args, int *counter)
{
	if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(args, int), counter);
	else if (*str == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (*str == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned int), counter);
	else if (*str == 'p')
		print_addr(va_arg(args, void *), counter);
	else if (*str == 'x')
		ft_putnbr_hex(va_arg(args, unsigned int), counter);
	else if (*str == 'X')
		ft_putnbr_caphex(va_arg(args, unsigned int), counter);
	else if (*str == '%')
		ft_putchar('%', counter);
	else
		ft_putchar(*str, counter);
}
