/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:53:35 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 15:23:22 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>

char	*get_next_line(int fd);
void	strlcpy_gnl(char *dst, const char *src, size_t dstsize);
char	*join_to_nl(char *previous_line, char buf[BUFFER_SIZE + 1]);
char	*ft_free_gnl(char **s);
size_t	ft_strlen_gnl(const char *s);
int		ft_strchr_index_gnl(const char *s, int tofind);
void	ft_bzero_gnl(void *s, size_t n);
void	*ft_calloc_gnl(size_t nmemb, size_t size);

#endif
