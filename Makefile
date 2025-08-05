# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/08/05 12:33:25 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MP= ./moves/
MOVES = $(MP)operation_a.c $(MP)operation_b.c $(MP)operation_double.c \
			$(MP)moves.c $(MP)swaps.c $(MP)four_five.c

EP = ./libft/
EXT = $(EP)ft_atol.c $(EP)ft_isdigit.c $(EP)ft_lstadd_back.c \
			$(EP)ft_lstnew.c $(EP)ft_lstadd_front.c $(EP)ft_lstsize.c \
			$(EP)ft_lstclear.c
			
NAME = push_swap
SRCS = arg_handler.c calculate.c check_order.c errors.c func.c lst_handler.c \
		push_swap.c turk.c $(MOVES) $(EXT)

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