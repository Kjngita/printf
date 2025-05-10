/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_related.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:14:48 by gita              #+#    #+#             */
/*   Updated: 2025/05/10 22:09:38 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	writechar(int c)
{
	char	single;

	single = (char)c;
	write(1, &single, 1);
	return (1);
}

int	writestr(char *text)
{
	int	i;

	i = 0;
	if (text == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (text[i])
	{
		write(1, &text[i], 1);
		i++;
	}
	return (i);
}
int	stringlength(char *s)
{
	int	measure;

	measure = 0;
	if (s == NULL)
		return (-68);
	while (*s++)
		measure++;
	return (measure);
}