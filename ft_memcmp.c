/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:17:37 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/14 10:34:31 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (((unsigned char *)s1)[c] != ((unsigned char *)s2)[c])
			return (((unsigned char *)s1)[c] - ((unsigned char *)s2)[c]);
		c++;
	}
	return (0);
}
