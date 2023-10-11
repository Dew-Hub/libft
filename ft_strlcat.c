/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:59:01 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/11 10:56:31 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = (size_t)ft_strlen(dst);
	if (i >= dstsize)
		return (ft_strlen(src) + dstsize);
	while ((i + a + 1) < dstsize && src[a])
	{
		dst[i + a] = src[a];
		a++;
	}
	if (i + a >= dstsize)
	{
		dst[i + a - 1] = '\0';
		return (ft_strlen(dst) + 1 + ft_strlen(&src[a]));
	}
	else
	{
		dst[i + a] = '\0';
		return (ft_strlen(dst) + ft_strlen(&src[a]));
	}
}
