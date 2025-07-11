/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:03:15 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/10 15:03:08 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

# include "srcs/libft.h"

//arg_handler.c
long	*handler(int argc, char **argv);

//errors.c
void	err();

//lst_handler.c
void	lst_create(t_list **stack, long *arr, int argc);

//utils.c
void	swap_two(t_list **lst);

//operations_a.c
void	sa(t_list **lst);
void	pa(t_list **lst_a, t_list **lst_b);
void	rra(t_list **lst);

//operation_b.c
void	sb(t_list **lst);
void	pb(t_list **lst_b, t_list **lst_a);
void	rrb(t_list **lst);

//operation_double.c

#endif