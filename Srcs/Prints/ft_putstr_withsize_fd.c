/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_withsize_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:15:14 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 15:15:15 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_putstr_withsize_fd(char *to_print, int fd, int size_to_print)
{
	int	r_write;

	r_write = write(fd, to_print, size_to_print);
	return (r_write);
}
