/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:08:12 by gita              #+#    #+#             */
/*   Updated: 2025/05/12 22:37:23 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*newstring;
	unsigned char	replace;

	newstring = (unsigned char *)s;
	replace = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		newstring[i] = replace;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			ruler;
	unsigned char	*new;

	ruler = nmemb * size;
	if (ruler != 0 && (ruler / nmemb) != size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		ruler = 1;
	new = malloc(ruler);
	if (new != NULL)
		ft_memset(new, '\0', ruler);
	return (new);
}
