/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:09:18 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/10 22:50:41 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1n;
	const unsigned char	*s2n;
	size_t			i;

	if (!s1 || !s2)
		return (s1 - s2);

	s1n = (const unsigned char *)s1;
	s2n = (const unsigned char *)s2;
	
	i = 0;	
	while (i < n)
	{
		if (s1n[i] != s2n[i])
			return (s1n[i] - s2n[i]);
		i++;
	}
	return (0);
}
