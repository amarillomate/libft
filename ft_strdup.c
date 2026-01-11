/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:07:28 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/10 23:07:42 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char		*new;
	size_t		slen;

	slen = ft_strlen(s);
	new = malloc((slen + 1) * (sizeof(char)));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s, slen + 1);
	return (new);
}	
