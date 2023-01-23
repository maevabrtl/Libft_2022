/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maya <Maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:39:21 by mabertha          #+#    #+#             */
/*   Updated: 2023/01/23 15:18:52 by Maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void *ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t			i;

	src = s2;
	dest = s1;
	while (dest[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((void *)dest);
}
