/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:23:55 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/10 18:06:34 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*new;
	size_t	t;
	size_t	i;

	t = nmemb * size;
	new = malloc(t);
	
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < t)
	{
		((unsigned char *)new)[i] = '\0';
		i++;
	}
	return (new);
}
