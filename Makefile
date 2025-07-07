# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/07/03 14:42:31 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = push_swap.c errors.c arg_handler.c lst_handler.c

E_PATH = ./srcs/
SRCS_EXT = $(E_PATH)ft_atol.c $(E_PATH)ft_isdigit.c $(E_PATH)ft_lstadd_back.c $(E_PATH)ft_lstnew.c

COMP_LIB = ar rcs
RM = rm -f
CC = cc
CC_FLAGS = -Wall -Wextra -Werror -g

OBJS = $(SRCS:.c=.o)
OBJS_EXT = $(SRCS_EXT:.c=.o)

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(EXT_PATH) $(OBJS_EXT)
	$(CC) $(CC_FLAGS) $(OBJS) $(OBJS_EXT) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(EXT_PATH)$(OBJS_EXT)

fclean: clean
	$(RM) $(NAME) $(EXT_PATH)$(OBJS_EXT)

re: fclean all

.PHONY: all clean fclean re