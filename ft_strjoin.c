/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 23:34:52 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/11 00:12:31 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new = malloc((s1len + s2len + 1) * (sizeof(char)));
	if(new == NULL)
		return(NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i + j] = s2[j];
		j++;
	}
	return (new);
}
