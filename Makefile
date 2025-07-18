# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/07/18 15:40:03 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MP= ./moves/
MOVES = $(MP)operation_a.c $(MP)operation_b.c $(MP)operation_double.c \
			$(MP)moves.c

EP = ./libft/
EXT = $(EP)ft_atol.c $(EP)ft_isdigit.c $(EP)ft_lstadd_back.c \
			$(EP)ft_lstnew.c $(EP)ft_lstadd_front.c $(EP)ft_lstsize.c \
			$(EP)ft_lstclear.c
NAME = push_swap
SRCS = push_swap.c errors.c arg_handler.c lst_handler.c check_order.c \
			calculate.c $(MOVES) $(EXT)

COMP_LIB = ar rcs
RM = rm -f
CC = cc
CC_FLAGS = -Wall -Wextra -Werror -g

OBJS = $(SRCS:.c=.o)

%.o : %.c
	@ $(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(EXT_PATH) $(OBJS_EXT)
	@ $(CC) $(CC_FLAGS) $(OBJS) -o $(NAME) | echo "Compiled"

all: $(NAME)

clean:
	@ $(RM) $(OBJS) $(EXT_PATH)$(OBJS_EXT)

fclean: clean
	@ $(RM) $(NAME) $(EXT_PATH)$(OBJS_EXT) | echo "Cleaned"

re: fclean all

.PHONY: all clean fclean re