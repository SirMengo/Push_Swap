/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:03:15 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 11:02:43 by msimoes          ###   ########.fr       */
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
long	*lst_arr(t_list *lst);
long	*new_lst(long *sort, long *orig, long *inside, int size);

//check_order.c
int		is_ordered(int argc, long *arr);

//calculate.c
void	calc_a(t_list **lst);
void	calc_rotate(t_list **lst_a, t_list **lst_b);
void	cost_total(t_list **lst);
t_list	*calc_cost(t_list **lst);

//func.c
long	*bubble_sort(long *arr, int size);
void	calc_all(t_list **a, t_list **b);

//turk.c
void	rr_lst(t_list **a, t_list **b, int *pos_a, int *pos_b);
void	rrr_lst(t_list **a, t_list **b, int *pos_a, int *pos_b);
t_list	*calc_lst(t_list **lst);
void	push_nbr(t_list **a, t_list **b, int size);

#endif