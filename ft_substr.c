/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:33:21 by buonturk          #+#    #+#             */
/*   Updated: 2023/10/17 15:52:51 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	size_t	i;
	size_t	j;
	char	*final;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		final = (char *)malloc((sizeof(char) * i) + 1);
		if (!final)
			return (NULL);
		j = 0;
		while (j < i)
		{
			final[j] = s[start + j];
			j++;
		}
		final[j] = '\0';
		return (final);
	}
	return (NULL);

/* çalışıyor
	char	*str;
	char	*src;

	src = (char *)s;
	if (!src)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		str = (char *)malloc((sizeof(char) * len) + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, (char *)(s + start), len + 1);
	}
	return (str);
	*/
/* çalışıyor
	char	*str;
	char	*src;

	src = (char *)s;
	if (!src)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		str = (char *)malloc((sizeof(char) * len) + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, (char *)(s + start), len + 1);
	}
	return (str);
*/
	
	/*
	char	*sub_str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - start;
	if (len < i)
		i = len;
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	sub_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!sub_str)
		return (0);
	ft_strlcpy(sub_str, s + start, i + 1);
	return (sub_str);
	*/

	/*
	//size_t	i;
	char	*sub_str;

	//i = 0;
	
	sub_str = malloc(sizeof(char) * (len+1));
	if(!sub_str)
		return NULL;
	sub_str[0] = '\0';

	//while (s[i] != (char)start)
	//	i++;
	if(ft_strlen(s) >= start)
	{
		ft_strlcpy(sub_str, &s[start], len+1);
		return (sub_str);
	}
	else
		return (sub_str);
		*/
}
