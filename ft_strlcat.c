/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:50:02 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/31 18:13:50 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	dst_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = dst_size;
	j = 0;
	if (dstsize == 0)
		return (src_size);
	if (dstsize < dst_size)
		return (src_size + dstsize);
	else
	{
		while (src[j] && (dst_size + j) < dstsize)
			dest[i++] = src[j++];
		if ((dst_size + j) == dstsize && dst_size < dstsize)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_size + dst_size);
	}
}
