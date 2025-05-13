/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_related.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:29:19 by gita              #+#    #+#             */
/*   Updated: 2025/05/13 17:06:41 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	intlen(long num)
{
	int	step;

	step = 0;
	if (num <= 0)
	{
		step++;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		step++;
	}
	return (step);
}

int	normal_num(int n)
{
	int		length;
	long	copy;

	length = intlen(n);
	copy = n;
	if (copy < 0)
	{
		writechar('-');
		copy = -copy;
	}
	if (copy >= 10)
		normal_num(copy / 10);
	writechar(copy % 10 + '0');
	return (length);
}

int	fancy_num(uintptr_t patient, char *base)
{
	long	copy;
	int		result;
	int		i;
	int		baselen;

	copy = patient;
	result = 0;
	i = 0;
	baselen = stringlength(base);
	if (copy == 0)
		result++;
	while (copy != 0)
	{
		copy /= baselen;
		result++;
	}
	copy = patient;
	if (copy >= baselen)
		fancy_num(copy / baselen, base);
	writechar(base[copy % baselen]);
	return (result);
}

int	finger(uintptr_t ptr, char *base)
{
	int	result;
	
	if (ptr == 0)
		return (writestr("(nil)"));
	result = writestr("0x");
	if (result == -1)
		return (-1);
	result += fancy_num(ptr, base);
	return (result);
}