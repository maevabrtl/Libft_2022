/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:05:32 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 15:05:33 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_len(long n)
{
	int	ret;

	ret = 1;
	if (n < 0)
	{
		ret++;
		n *= -1;
	}
	while ((n / 10) > 0)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

long	itoa_neg(long n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	nb = n;
	len = nb_len(nb);
	str = ft_calloc(sizeof(char), len + 1);
	if (str == NULL)
		return (NULL);
	if (nb < 0 || nb == 0)
		nb = itoa_neg(nb, str);
	while (nb)
	{
		len--;
		str[len] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}
