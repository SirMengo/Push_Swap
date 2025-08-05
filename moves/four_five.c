/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:01:43 by msimoes           #+#    #+#             */
/*   Updated: 2025/08/05 13:14:30 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

int	lower_num(t_list **list_a)
{
	t_list	*aux;
	int		low;

	aux = *list_a;
	low = aux->num;
	while (aux)
	{
		if (aux->num < low)
		{
			low = aux->num;
			continue ;
		}
		aux = aux->next;
	}
	return (low);
}

int	lower_posi(t_list **list, int low)
{
	int		posi;
	t_list	*aux;

	aux = *list;
	posi = 0;
	while (aux)
	{
		if (aux->num == low)
			return (posi);
		aux = aux->next;
		posi++;
	}
	return (posi);
}

void	move_rotate(t_list **list, int posi, int size, int low)
{
	t_list	*aux;

	aux = *list;
	if (posi <= (size / 2) && aux->num != low)
		ra(list);
	else if (posi > (size / 2) && aux->num != low)
		rra(list);
}

void	swap_five(t_list **a, t_list **b, int size)
{
	int		num;
	int		lower;
	t_list	*aux;

	num = size;
	lower = lower_num(a);
	while (num > 3 && *a)
	{
		aux = *a;
		if (aux->num != lower)
			move_rotate(a, lower_posi(a, lower), size, lower);
		else if (aux->num == lower)
		{
			printf("%i\n", lower);
			pb(a, b);
			lower = lower_num(a);
			num--;
		}
	}
	swap_three(a);
	while (num != size)
	{
		pa(a, b);
		num++;
	}
}
