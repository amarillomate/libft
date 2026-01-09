/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:53:34 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/05 18:39:20 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char 	*srcn;
	unsigned char		*dstn;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	dstn = (unsigned char *)dst;
        srcn = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstn[i] = srcn[i];
		i++;
	}
	return (dst);
}
