/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:03:09 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/17 16:46:02 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_a(t_list **lst)
{
	int		i;
	int		local;
	t_list	*aux;

	aux = *lst;
	i = ft_lstsize(*lst);
	local = 0;
	while (aux)
	{
		if (local <= (i / 2))
			aux->cost_a = local;
		else
			aux->cost_a = local - i;
		local++;
		aux = aux->next;
	}
}

long	best_list(t_list *lst, long num)
{
	t_list *best;
	t_list *tmp;

	best = NULL;
	tmp = lst;
	while (tmp)
	{
		if (tmp->num < num)
		{
			if (!best || tmp->num > best->num)
				best = tmp;
		}
		tmp = tmp->next;
	}
	if (best)
		return (best->cost_a);
	best = lst;
	tmp = lst;
	while (tmp)
	{
		if(tmp->num > best->num)
			best = tmp;
		tmp = tmp->next;
	}
	return (best->cost_a);
}

void	calc_rotate(t_list **lst_a, t_list **lst_b)
{
	t_list	*val;

	val = *lst_a;
	while(val)
	{
		val->cost_b = best_list(*lst_b, val->num);
		val = val->next;
	}
}
