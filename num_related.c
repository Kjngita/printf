/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_related.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:29:19 by gita              #+#    #+#             */
/*   Updated: 2025/05/08 23:50:07 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	intlen(int num)
{
	int	step;

	step = 0;
	if (num == -2147483648)
		return (11);
	if (num < 0)
	{
		step++;
		num = -num;
	}
	while (num >= 10)
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
