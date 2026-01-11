/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:48:51 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/05 18:40:15 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *sn;
	size_t		i;

	sn = (unsigned char*)s;
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		sn[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
