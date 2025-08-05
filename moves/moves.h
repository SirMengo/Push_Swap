/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:04:19 by msimoes           #+#    #+#             */
/*   Updated: 2025/08/05 13:28:47 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "../libft/libft.h"
//moves.c
void	lst_push(t_list **dest, t_list **src);
void	lst_rotate(t_list **lst);
void	lst_reverse(t_list **lst);
//operations_a.c
void	sa(t_list **lst);
void	pa(t_list **lst_a, t_list **lst_b);
void	ra(t_list **lst);
void	rra(t_list **lst);
//operation_b.c
void	sb(t_list **lst);
void	pb(t_list **lst_b, t_list **lst_a);
void	rb(t_list **lst);
void	rrb(t_list **lst);
//operation_double.c
void	ss(t_list **lst_a, t_list **lst_b);
void	rr(t_list **lst_a, t_list **lst_b);
void	rrr(t_list **lst_a, t_list **lst_b);
//swaps.c
void	swap_two(t_list **lst);
void	swap_three(t_list **a);
void	swap_five();
//four_five.c
void	swap_five(t_list **a, t_list **b, int size);

#endif