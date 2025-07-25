/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:27:21 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 11:31:53 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	sa(t_list **lst)
{
	swap_two(lst);
	write(1, "sa\n", 3);
}

void	pa(t_list **lst_a, t_list **lst_b)
{
	lst_push(lst_a, lst_b);
	write(1, "pa\n", 3);
}

void	ra(t_list **lst)
{
	lst_rotate(lst);
	write(1, "ra\n", 3);
}

void	rra(t_list **lst)
{
	lst_reverse(lst);
	write(1, "rra\n", 4);
}
