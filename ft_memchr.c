/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:46:18 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/05 20:04:07 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sn;
	size_t			i;

	sn = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if(sn[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
