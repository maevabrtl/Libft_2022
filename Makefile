# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maya <Maya@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 13:26:09 by mabertha          #+#    #+#              #
#    Updated: 2023/01/23 20:02:54 by Maya             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c
PATH_OBJ = ./Objs
OBJS = $(addprefix (PATH_OBJ)/, $(SRC:.c=.o))
INC = libft.h

#*****************************************************************************#
#                                   RULES                                     #
#*****************************************************************************#

all: $(NAME)

clean:
	rm -rf $(PATH_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

#*****************************************************************************#
#                                Compilation                                  #
#*****************************************************************************#


$(NAME): $(PATH_OBJ) $(INC)
	ar rcs $(NAME) $(OBJS)

$(PATH_OBJ):
	mkdir $@

$(PATH_OBJ)%.o: %.c
	$(CC) $(CC_FLAGS) -o $@ -c $<
