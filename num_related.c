/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_related.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:29:19 by gita              #+#    #+#             */
/*   Updated: 2025/05/10 22:09:49 by gita             ###   ########.fr       */
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
		write (1, "-", 1);
		copy = -copy;
	}
	if (copy >= 10)
		normal_num(copy / 10);
	writechar(copy % 10 + '0');
	return (length);
}

int	ud_num(unsigned int positive)
{
	int		length;
	long	copy;

	length = intlen(positive);
	copy = positive;
	if (copy >= 10)
		ud_num(copy / 10);
	writechar(copy % 10 + '0');
	return (length);
}
// int hex_x(unsigned int patient, char *base)
// {
// 	int		length;
// 	long	copy;
// 	int		baselen;

// 	length = intlen(patient);
// 	copy = patient;
// 	baselen = ft_strlen(base);
// 	if (copy >= baselen)
// 		hex_x(copy / baselen);
// 	writechar(copy % baselen + '0'); //why + '0'?
// 	return (length);
// }