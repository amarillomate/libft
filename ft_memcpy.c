/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:53:34 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/10 22:40:15 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char 	*srcn;
	unsigned char		*destn;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	destn = (unsigned char *)dest;
        srcn = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destn[i] = srcn[i];
		i++;
	}
	return (dest);
}
