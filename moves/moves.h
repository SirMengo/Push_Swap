/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:04:19 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 12:51:39 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "../libft/libft.h"
//moves.c
void	swap_two(t_list **lst);
void	swap_three(t_list **a);
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

#endif