/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:54:21 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 14:54:22 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"

int	ft_printf(const char *str, ...);
int	read_and_print(char *str, va_list args);
int	search_format_specifier(char *str, int i_str, int i_format, char *format);
int	format_args(va_list args, char *str);
int	measure_len_nbr(int len, size_t nbr, size_t base);
int	get_p_arg(void *ptr_arg, char *base);
int	get_idux_args(long arg_nbr, char *base);
int	get_scpercent_args(char *str, va_list args);
int	get_cpercent_arg(char format, va_list args);
int	get_s_arg(char *s_arg);

#endif
