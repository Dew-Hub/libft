/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:49:00 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/31 13:59:41 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	numlen(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;

	nbr = n;
	len = numlen(nbr);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (n == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len--] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (str);
}
