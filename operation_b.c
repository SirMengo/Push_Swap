/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:54:01 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/11 14:31:16 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **lst)
{
	swap_two(lst);
	write(1, "sb\n", 3);
}

void	pb(t_list **lst_b, t_list **lst_a)
{
	lst_push(lst_b, lst_a);
	write(1, "pb\n", 3);
}

void	rb(t_list **lst_b)
{
	lst_rotate(lst_b);
	write(1, "rb\n", 3);
}

void	rrb(t_list **lst)
{
	lst_reverse(lst);
	write(1, "rrb\n", 4);
}
