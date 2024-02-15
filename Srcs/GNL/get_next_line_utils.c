/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:06:46 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 21:53:44 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/get_next_line.h"

char	*ft_free_gnl(char **s)
{
	if (*s != NULL)
		free(*s);
	*s = NULL;
	return (NULL);
}

size_t	ft_strlen_gnl(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

int	ft_strchr_index_gnl(const char *s, int tofind)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i] != (char)tofind && s[i])
		i++;
	if (s[i] == (char)tofind)
		return (i);
	return (-1);
}

void	ft_bzero_gnl(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc_gnl(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero_gnl(str, nmemb * size);
	return (str);
}
