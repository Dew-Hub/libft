/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:18:18 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/14 00:25:45 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (*s != '\0')
		s++;
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		s_len--;
	}
	return (NULL);
}
