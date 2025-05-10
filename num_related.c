/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_related.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:29:19 by gita              #+#    #+#             */
/*   Updated: 2025/05/10 18:01:03 by gita             ###   ########.fr       */
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
	char	printer;

	length = intlen(n);
	copy = n;
	if (copy < 0)
	{
		write (1, "-", 1);
		copy = -copy;
	}
	if (copy >= 10)
		normal_num(copy / 10);
	printer = copy % 10 + '0';
	write (1, &printer, 1);
	return (length);
}

int	ud_num(unsigned int positive)
{
	int		length;
	long	copy;
	char	printer;

	length = intlen(positive);
	copy = positive;
	if (copy < 0)
	{
		write (1, "-", 1);
		copy = -copy;
	}
	if (copy >= 10)
		normal_num(copy / 10);
	printer = copy % 10 + '0';
	write (1, &printer, 1);
	return (length);
}
