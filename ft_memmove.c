/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:13:19 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/09 19:56:27 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*srcn;
	unsigned char 		*dstn;

	if (!dst || !src)
		return (dst);

	srcn = (const unsigned char *)src;
	dstn = (unsigned char *)dst;
	if (dstn < srcn)
	{
		ft_memcpy(dst, src, n);
	}
	else
	{
		while (n > 0)
		{
		n--;
		dstn[n] = srcn[n];
		}
	}
	return (dst);
}
