/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:14:13 by andrgarc          #+#    #+#             */
/*   Updated: 2026/01/11 00:26:41 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	setlen;
	size_t	s1len;
	size_t	i;

	new = malloc((setlen + 1) * (sizeof(char)));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i] == set[i])
		i++;
}
