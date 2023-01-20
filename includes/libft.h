/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:53:58 by mabertha          #+#    #+#             */
/*   Updated: 2022/11/24 09:02:33 by mabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # include "colors.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

size_t			ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
int				ft_strchr_index(char *s, char c);
char			*ft_strrchr(const char *s, int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *s);
void			ft_strncpy(char *dst, const char *src, int n);
char			**ft_split(char const *s, char c);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_itoa(int n);
char			*utoa(size_t n, int base, int majbase);
char			*ft_itoa_base(int n, int base);
char			*ft_strnstr (const char *big, const char *little, size_t len);

#endif
