/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:50 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/17 16:29:53 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	c;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1	) * sizeof(char));
	if (!str)
		return (NULL);
	c = 0;
	while (s1[c])
	{
		str[c] = s1[c];
		c++;
	}
	c = 0;
	while (s2[c])
	{
		str[ft_strlen(s1) + c] = s2[c];
		c++;
	}
	str[ft_strlen(s1) + c] = '\0';
	return (str);
}
