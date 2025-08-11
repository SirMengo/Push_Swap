/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:34:10 by msimoes           #+#    #+#             */
/*   Updated: 2025/08/11 11:16:01 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	swap_two(t_list **lst)
{
	t_list	*n1;
	t_list	*n2;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	n1 = *lst;
	n2 = n1->next;
	n1->next = n2->next;
	n2->next = n1;
	*lst = n2;
}

int	check_order(t_list **lst)
{
	long	*arr;

	arr = lst_arr(*lst);
	if (is_ordered(3, arr) == 0)
	{
		free(arr);
		return (0);
	}
	free(arr);
	return (1);
}

void	swap_three(t_list **a)
{
	t_list	*aux;

	aux = *a;
	if (check_order(a) == 0)
		return ;
	if (aux->num > aux->next->num && aux->num < aux->next->next->num)
		sa(a);
	else if (aux->num < aux->next->num && aux->num < aux->next->next->num)
	{
		rra(a);
		sa(a);
	}
	else if (aux->num < aux->next->num && aux->num > aux->next->next->num)
		rra(a);
	else if (aux->num > aux->next->num && aux->num > aux->next->next->num)
	{
		ra(a);
		aux = *a;
		if (aux->num > aux->next->num)
			sa(a);
	}
}
