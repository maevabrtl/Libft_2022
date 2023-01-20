# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabertha <mabertha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 13:26:09 by mabertha          #+#    #+#              #
#    Updated: 2022/11/24 09:09:28 by mabertha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
PATH_OBJ = ./objs/
PATH_SRC = ./srcs/
PATH_INC = ./includes/
INCS = $(addprefix $(PATH_INC), libft.h)

#******************************************************************************#
#                                    CHARS                                     #
#******************************************************************************#

PATH_SRC_CHARS = $(PATH_SRC)Chars/
FILES_CHARS = ft_tolower ft_toupper ft_isalnum ft_isalpha ft_isascii ft_isdigit\
			  ft_isprint
OBJ_CHARS = $(addprefix $(PATH_OBJ), $(addsuffix .o , $(FILES_CHARS)))
SRC_CHARS = $(addprefix $(PATH_SRC_CHARS), $(addsuffix .c , $(FILES_CHARS)))

#******************************************************************************#
#                                    MEMORY                                    #
#******************************************************************************#

PATH_SRC_MEMORY = $(PATH_SRC)Memory/
FILES_MEMORY = ft_bzero ft_calloc ft_memccpy ft_memchr ft_memcmp ft_memcpy\
               ft_memmove ft_memset
OBJ_MEMORY = $(addprefix $(PATH_OBJ), $(addsuffix .o , $(FILES_MEMORY)))
SRC_MEMORY = $(addprefix $(PATH_SRC_MEMORY), $(addsuffix .c , $(FILES_MEMORY)))

#******************************************************************************#
#                                    STRINGS                                   #
#******************************************************************************#

PATH_SRC_STRS = $(PATH_SRC)Strings/
FILES_STRS = ft_atoi ft_strlen
OBJ_STRS = $(addprefix $(PATH_OBJ), $(addsuffix .o , $(FILES_STRS)))
SRC_STRS = $(addprefix $(PATH_SRC_STRS), $(addsuffix .c , $(FILES_STRS)))

#******************************************************************************#
#                                    ALL                                       #
#******************************************************************************#

OBJS = $(OBJ_CHARS) $(OBJ_MEMORY) $(OBJ_STRS)
SRCS = $(SRC_CHARS) $(SRC_MEMORY) $(SRC_STRS)
FILES = $(FILES_CHARS) $(FILES_MEMORY) $(FILES_STRS)

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


$(NAME): $(PATHS_OBJ) $(INCS)
	ar rcs $(NAME) $(OBJS)

$(PATHS_OBJ):
	mkdir $@

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	$(CC) $(CC_FLAGS) -I $(PATH_INC) -o $@ -c $<
