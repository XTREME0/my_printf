/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataai <ataai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:08:25 by ataai             #+#    #+#             */
/*   Updated: 2024/12/01 21:08:26 by ataai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putnbr(int num, int *counter);
void	ft_putnbr_hex(unsigned int n, int *counter);
void	ft_putnbr_caphex(unsigned int n, int *counter);
void	print_addr(void *pp, int *counter);
void	ft_putstr(const char *str, int *counter);
void	ft_putchar(const char c, int *counter);
void	ft_unsigned_putnbr(unsigned int n, int *counter);
size_t	ft_strlen(const char *str);
void	exec_param(const char *str, va_list args, int *counter);
#endif
