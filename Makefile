.PHONY: all clean fclean re

include text_mod.mk

NAME := libft.a
CC := gcc
MANDATORY_FLAGS := -Wall -Wextra -Werror
DEPS_FLAGS := -MMD -MP
CC_FLAGS := -fsanitize=address -g3
ALL_FLAGS = $(MANDATORY_FLAGS) $(CC_FLAGS) $(DEPS_FLAGS)
PATH_OBJ := ./Objs/
PATH_SRC := ./Srcs/
PATH_INC := ./Includes/
INCS := $(addprefix $(PATH_INC), libft.h)

#******************************************************************************#
#                                    CHARS                                     #
#******************************************************************************#

PATH_OBJ_CHARS := $(PATH_OBJ)Chars/
PATH_SRC_CHARS := $(PATH_SRC)Chars/
FILES_CHARS := ft_tolower ft_toupper ft_isalnum ft_isalpha ft_isascii ft_isdigit\
			ft_isprint
OBJ_CHARS := $(addprefix $(PATH_OBJ_CHARS), $(addsuffix .o , $(FILES_CHARS)))
SRC_CHARS := $(addprefix $(PATH_SRC_CHARS), $(addsuffix .c , $(FILES_CHARS)))

#******************************************************************************#
#                                 CONVERSIONS                                  #
#******************************************************************************#

PATH_OBJ_CONV := $(PATH_OBJ)Conversions/
PATH_SRC_CONV := $(PATH_SRC)Conversions/
FILES_CONV := ft_atoi ft_itoa ft_utoabase ft_itoabase
OBJ_CONV := $(addprefix $(PATH_OBJ_CONV), $(addsuffix .o , $(FILES_CONV)))
SRC_CONV := $(addprefix $(PATH_SRC_CONV), $(addsuffix .c , $(FILES_CONV)))

#******************************************************************************#
#                                    LISTS                                     #
#******************************************************************************#

PATH_OBJ_LISTS := $(PATH_OBJ)Lists/
PATH_SRC_LISTS := $(PATH_SRC)Lists/
FILES_LISTS := ft_lstadd_back ft_lstclear ft_lstiter ft_lstmap ft_lstsize\
			ft_lstadd_front ft_lstdelone ft_lstlast ft_lstnew ft_lstfree
OBJ_LISTS := $(addprefix $(PATH_OBJ_LISTS), $(addsuffix .o , $(FILES_LISTS)))
SRC_LISTS := $(addprefix $(PATH_SRC_LISTS), $(addsuffix .c , $(FILES_LISTS)))

#******************************************************************************#
#                                    MEMORY                                    #
#******************************************************************************#

PATH_OBJ_MEMORY := $(PATH_OBJ)Memory/
PATH_SRC_MEMORY := $(PATH_SRC)Memory/
FILES_MEMORY := ft_bzero_str ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove\
			ft_memset
OBJ_MEMORY := $(addprefix $(PATH_OBJ_MEMORY), $(addsuffix .o , $(FILES_MEMORY)))
SRC_MEMORY := $(addprefix $(PATH_SRC_MEMORY), $(addsuffix .c , $(FILES_MEMORY)))

#******************************************************************************#
#                                    STRINGS                                   #
#******************************************************************************#

PATH_OBJ_STRS := $(PATH_OBJ)Strs/
PATH_SRC_STRS := $(PATH_SRC)Strs/
FILES_STRS := ft_strchr ft_strjoin ft_strlcpy ft_strmapi ft_strnstr\
			ft_strtrim ft_split ft_strdup ft_strlcat ft_strlen ft_strncmp\
			ft_strrchr ft_substr ft_strndup ft_striteri
OBJ_STRS := $(addprefix $(PATH_OBJ_STRS), $(addsuffix .o , $(FILES_STRS)))
SRC_STRS := $(addprefix $(PATH_SRC_STRS), $(addsuffix .c , $(FILES_STRS)))

#******************************************************************************#
#                                    PRINTS                                    #
#******************************************************************************#

PATH_SRC_PRINTS := $(PATH_SRC)Prints/
PATH_OBJ_PRINTS := $(PATH_OBJ)Prints/
FILES_PRINTS := ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd\
				# ft_putstr_withsize_fd
OBJ_PRINTS := $(addprefix $(PATH_OBJ_PRINTS), $(addsuffix .o , $(FILES_PRINTS)))
SRC_PRINTS := $(addprefix $(PATH_SRC_PRINTS), $(addsuffix .c , $(FILES_PRINTS)))

#******************************************************************************#
#                                    PRINTF                                    #
#******************************************************************************#

# PATH_SRC_PRINTF := $(PATH_SRC)Printf/
# PATH_OBJ_PRINTF := $(PATH_OBJ)Printf/
# FILES_PRINTF := ft_printf ft_printf_formats
# OBJ_PRINTF := $(addprefix $(PATH_OBJ_PRINTF), $(addsuffix .o , $(FILES_PRINTF)))
# SRC_PRINTF := $(addprefix $(PATH_SRC_PRINTF), $(addsuffix .c , $(FILES_PRINTF)))

#******************************************************************************#
#                                      GNL                                     #
#******************************************************************************#

PATH_SRC_GNL := $(PATH_SRC)GNL/
PATH_OBJ_GNL := $(PATH_OBJ)GNL/
FILES_GNL := get_next_line get_next_line_utils
OBJ_GNL := $(addprefix $(PATH_OBJ_GNL), $(addsuffix .o , $(FILES_GNL)))
SRC_GNL := $(addprefix $(PATH_SRC_GNL), $(addsuffix .c , $(FILES_GNL)))

#******************************************************************************#
#                                     ALL                                      #
#******************************************************************************#

PATHS_OBJ := $(PATH_OBJ) $(PATH_OBJ_CHARS) $(PATH_OBJ_CONV)\
		$(PATH_OBJ_LISTS) $(PATH_OBJ_MEMORY) $(PATH_OBJ_PRINTS) $(PATH_OBJ_STRS)\
		$(PATH_OBJ_GNL) # $(PATH_OBJ_PRINTF)
OBJS := $(OBJ_CHARS) $(OBJ_CONV) $(OBJ_LISTS) $(OBJ_MEMORY)\
		$(OBJ_PRINTS) $(OBJ_STRS) $(OBJ_GNL) # $(OBJ_PRINTF)
SRCS := $(SRC_CHARS) $(SRC_CONV) $(SRC_LISTS) $(SRC_MEMORY)\
		$(SRC_PRINTS) $(SRC_STRS) $(SRC_GNL) # $(SRC_PRINTF)
FILES := $(FILES_CHARS) $(FILES_CONV) $(FILES_LISTS)\
		$(FILES_MEMORY) $(FILES_PRINTS) $(FILES_STRS) $(FILES_GNL)\
		# $(FILES_PRINTF)

#*****************************************************************************#
#                                   RULES                                     #
#*****************************************************************************#

all: $(NAME)

clean:
	@rm -rf $(PATH_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

#*****************************************************************************#
#                                Compilation                                  #
#*****************************************************************************#

$(NAME): $(PATHS_OBJ) $(OBJS) $(INCS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(TEXT_MOD_1)Library ready for use ! 🚀 $(RESET)\n"


$(PATHS_OBJ):
	@mkdir $@

$(PATH_OBJ)%.o: $(PATH_SRC)%.c $(INCS)
	@printf %b "  $(TEXT_MOD_2)Compiling$(RESET) $(TEXT_MOD_3)$<...$(RESET)"
	@$(CC) $(ALL_FLAGS) -I $(PATH_INC) -o $@ -c $<
	@printf "\r"
	@printf "                                                                                     \r"

-include $(OBJS:.o=.d)

#*****************************************************************************#
#                                Funny part                                   #
#*****************************************************************************#

TEXT_MOD_1 = $(ADD_TEXT_MOD)$(BOLD)$(FONT)$(CYAN)$(END_MOD)
TEXT_MOD_2 = $(ADD_TEXT_MOD)$(FONT)$(CYAN)$(END_MOD)
TEXT_MOD_3 = $(ADD_TEXT_MOD)$(BOLD)$(FADE)$(ITALIC)$(FONT)$(BLUE)$(END_MOD)

me:
	@true
a:
	@true
sandwich:
	@if [ `id -u` != 0 ]; then echo "What? Make it yourself."; else echo "Ok..."; fi

# <The thing you want to make>: <the stuff you need to make it>
#     <The steps to make it>
