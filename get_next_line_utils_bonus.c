/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:16:53 by manuel            #+#    #+#             */
/*   Updated: 2021/03/25 23:41:39 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strcpy(char *dst, const char *src)
{
	char	*buf;

	buf = dst;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (dst);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
		if (*str++ == (char)c)
			return ((char *)(str - 1));
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;

	len1 = ft_strlen(s1);
	str = (char *)malloc(sizeof(*str) * (len1 + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcpy(str + len1, s2);
	return (str);
}

