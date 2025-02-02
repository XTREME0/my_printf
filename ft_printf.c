/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataai <ataai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:08:59 by ataai             #+#    #+#             */
/*   Updated: 2024/12/01 21:09:00 by ataai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	va_start(args, str);
	counter = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (counter);
			exec_param(str, args, &counter);
		}
		else
		{
			write(1, str, 1);
			counter++;
		}
		str++;
	}
	return (counter);
}
