/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_related.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:29:19 by gita              #+#    #+#             */
/*   Updated: 2025/05/13 19:38:43 by gita             ###   ########.fr       */
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
	int		check;

	length = intlen(n);
	copy = n;
	if (copy < 0)
	{
		if (writechar('-') == -1)
			return (-1);
		copy = -copy;
	}
	if (copy >= 10)
		normal_num(copy / 10);
	check = writechar(copy % 10 + '0');
	if (check == -1)
		return (-1);
	else
		return (length);
}

int	fancy_num(uintptr_t patient, char *base)
{
	unsigned long	copy;
	int				result;
	int				i;
	unsigned long	baselen;

	copy = patient;
	result = 0;
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
	i = writechar(base[copy % baselen]);
	if (i == -1)
		return (-1);
	else
		return (result);
}

int	finger(uintptr_t ptr, char *base)
{
	int	result;
	int	check;
	
	if (ptr == 0)
		return (writestr("(nil)"));
	result = writestr("0x");
	if (result == -1)
		return (-1);
	check = fancy_num(ptr, base);
	if (check == -1)
		return (-1);
	else
	{
		result += check;
		return (result);
	}
}