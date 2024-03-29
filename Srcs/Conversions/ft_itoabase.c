/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:04:05 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 15:05:15 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int n, int base)
{
	int	nlen;

	nlen = 1;
	while (n / base)
	{
		n /= base;
		nlen++;
	}
	return (nlen);
}

static char	*special_cases(int n, char *r, int base)
{
	if (n == 0)
	{
		r[0] = '0';
		return (r);
	}
	if (base == 10)
		ft_strlcpy(r, "-2147483648", 12);
	return (r);
}

static int	neg(int n, char *ret)
{
	ret[0] = '-';
	return (-n);
}

char	*ft_itoabase(int n, int base)
{
	char	*ret;
	int		nlen;
	int		i;
	char	*strbase;

	strbase = "0123456789abcdef";
	nlen = nbrlen(n, base);
	if (n < 0)
		nlen++;
	ret = (char *)ft_calloc(nlen + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (special_cases(n, ret, base));
	if (n < 0)
		n = neg(n, ret);
	i = nlen;
	while (n && i-- >= 0)
	{
		ret[i] = strbase[n % base];
		n /= base;
	}
	return (ret);
}
