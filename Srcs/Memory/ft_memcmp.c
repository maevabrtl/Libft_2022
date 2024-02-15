/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:39:13 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 15:13:44 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*s;
	size_t			i;

	str = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != s[i])
			return (str[i] - s[i]);
		i++;
	}
	return (0);
}
