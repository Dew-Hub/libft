/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:59:01 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/11 02:54:16 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if ((size_t)ft_strlen(dst) >= dstsize)
		return (ft_strlen(dst) + dstsize);

	while (((ft_strlen(dst) + 1) + i) < dstsize)
	{
		dst[ft_strlen(dst)+ 1 + i] = src[i];
		i++;
	}
	return (ft_strlen(dst) + i);
}
