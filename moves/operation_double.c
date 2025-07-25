/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:03:25 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 12:51:00 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ss(t_list **lst_a, t_list **lst_b)
{
	swap_two(lst_a);
	swap_two(lst_b);
	write(1, "ss\n", 3);
}

void	rr(t_list **lst_a, t_list **lst_b)
{
	lst_rotate(lst_a);
	lst_rotate(lst_b);
	write(1, "rr\n", 3);
}

void	rrr(t_list **lst_a, t_list **lst_b)
{
	lst_reverse(lst_a);
	lst_reverse(lst_b);
	write(1, "rrr\n", 4);
}
