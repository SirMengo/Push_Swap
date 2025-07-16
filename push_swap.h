/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:03:15 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/14 16:28:07 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

# include "srcs/libft.h"

//arg_handler.c
long	*handler(int argc, char **argv);

//errors.c
void	err_args(long *arr);

//lst_handler.c
void	lst_create(t_list **stack, long *arr, int argc);

//utils.c
void	swap_two(t_list **lst);
void	swap_three(t_list **a);
void	lst_push(t_list **dest, t_list **src);
void	lst_rotate(t_list **lst);
void	lst_reverse(t_list **lst);

//operations_a.c
void	sa(t_list **lst);
void	pa(t_list **lst_a, t_list **lst_b);
void	ra(t_list **lst_a);
void	rra(t_list **lst);

//operation_b.c
void	sb(t_list **lst);
void	pb(t_list **lst_b, t_list **lst_a);
void	rb(t_list **lst_b);
void	rrb(t_list **lst);

//operation_double.c
void	ss(t_list **lst_a, t_list **lst_b);
void	rr(t_list **lst_a, t_list **lst_b);
void	rrr(t_list **lst_a, t_list **lst_b);

//check_order.c
int		is_ordered(int argc, long *arr);

#endif