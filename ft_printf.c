/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:33:56 by gita              #+#    #+#             */
/*   Updated: 2025/05/07 21:12:58 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int	ft_examination(char *check)
{
	if (check == '%')
		write (1, '%', 1);
		return (1);
	
}
int	ft_printf(const char *format, ...)
{
	va_list	reservation;
	int		printed;

	printed = 0;
	va_start(reservation, format);
	if (format == NULL)
		return (0);
	while (*format)
	{
		if (*format == '%')
		{
			format++; //skip the % sign
			printed += ft_examination(&format);
			format++; //skip the type specifier
		}
		else
			write(1, &format, 1);
		format++;
		printed++;
	}
	va_end(reservation);
	return (printed);
}
