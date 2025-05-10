/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:33:56 by gita              #+#    #+#             */
/*   Updated: 2025/05/10 22:09:16 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_examination(va_list *ap, char check)
{
	if (check == '%')
		return (writechar('%'));
	if (check == 'c')
		return (writechar(va_arg(*ap, int)));
	if (check == 's')
		return (writestr(va_arg(*ap, char *)));
	if (check == 'd' || check == 'i')
		return (normal_num(va_arg(*ap, int)));
	if (check == 'u')
		return (ud_num(va_arg(*ap, unsigned int)));
	// if (check == 'x')
	// 	return (hex_x(va_arg(*ap, unsigned int)));
	return (-68);
}

int	ft_printf(const char *format, ...)
{
	va_list	reservation;
	int		printed;

	printed = 0;
	va_start(reservation, format);
	if (format == NULL)
		return (-68);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed += ft_examination(&reservation, *format);
		}
		else
		{
			writechar(*format);
			printed++;
		}
		format++;
	}
	va_end(reservation);
	return (printed);
}
