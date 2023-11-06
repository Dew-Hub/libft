/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:49:16 by buonturk          #+#    #+#             */
/*   Updated: 2023/11/01 02:37:56 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (dest == src)
		return (dest);
	if (src < dest)
	{
		while (len--)
			*(char *)(dest + len) = *(char *)(src + len);
		return (dest);
	}
	i = 0;
	while (i < len)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
