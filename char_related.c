/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_related.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:14:48 by gita              #+#    #+#             */
/*   Updated: 2025/05/08 23:31:30 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
		return (-68);
	while (text[i])
	{
		write(1, &text[i], 1);
		i++;
	}
	return (i);
}
