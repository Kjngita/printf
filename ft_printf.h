/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:16:59 by gita              #+#    #+#             */
/*   Updated: 2025/05/13 17:11:37 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		examination(va_list *ap, char check);

int		writechar(int c);
int		writestr(char *text);
int		stringlength(char *s);

int		intlen(long num);
int		normal_num(int n);
int		fancy_num(uintptr_t patient, char *base);
int		finger(uintptr_t ptr, char *base);

#endif