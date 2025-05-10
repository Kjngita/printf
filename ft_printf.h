/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:16:59 by gita              #+#    #+#             */
/*   Updated: 2025/05/10 17:49:19 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_examination(va_list *ap, char check);

int	writechar(int c);
int	writestr(char *text);

int	intlen(long num);
int	normal_num(int n);
int	ud_num(unsigned int positive);

#endif