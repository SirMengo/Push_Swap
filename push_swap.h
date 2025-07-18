/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:03:15 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/18 12:33:08 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "moves/moves.h"

//arg_handler.c
long	*handler(int argc, char **argv);

//errors.c
void	err_args(long *arr);

//lst_handler.c
void	lst_create(t_list **stack, long *arr, int argc);

//check_order.c
int		is_ordered(int argc, long *arr);

//calculate.c
void	calc_a(t_list **lst);
void	calc_rotate(t_list **lst_a, t_list **lst_b);
void	cost_total(t_list **lst);
t_list	*calc_cost(t_list **lst);

#endif