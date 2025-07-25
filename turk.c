/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:21:43 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 11:03:47 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_lst(t_list **a, t_list **b, int *pos_a, int *pos_b)
{
	while (*pos_a > 0 && *pos_b > 0)
	{
		rr(a, b);
		(*a)--;
		(*b)--;
	}
	while (*pos_a > 0)
	{
		ra(a);
		(*pos_a)--;
	}
	while (*pos_b > 0)
	{
		rb(b);
		(*pos_b)--;
	}
}

void	rrr_lst(t_list **a, t_list **b, int *pos_a, int *pos_b)
{
	while (*pos_a > 0 && *pos_b > 0)
	{
		rrr(a, b);
		(*a)++;
		(*b)++;
	}
	while (*pos_a > 0)
	{
		rra(a);
		(*pos_a)++;
	}
	while (*pos_b > 0)
	{
		rrb(b);
		(*pos_b)++;
	}
}

t_list	*calc_lst(t_list **lst)
{
	t_list	*point;
	t_list	*aux;
	int		upper;

	aux = *lst;
	point = aux;
	upper = aux->num;
	while(aux)
	{
		if(aux->num > upper)
		{
			upper = aux->num;
			point = aux;
		}
		aux = aux->next;
	}
	return (point);
}

void	sort_list(t_list **lst_a, t_list **lst_b)
{
	t_list	*node;
	int		a;
	int		b;

	calc_all(lst_a, lst_b);
	node = calc_cost(lst_a);
	a = node->cost_a;
	b = node->cost_b;
	rr_lst(lst_a, lst_b, &a, &b);
	rrr_lst(lst_a, lst_b, &a, &b);
	if (a == 0 && b == 0)
		pb(lst_a, lst_b);
}

void	push_nbr(t_list **a, t_list **b, int size)
{
	long	*original;
	long	*sorted;
	long	*inside;
	int		num;

	original = lst_arr(*a);
	sorted = bubble_sort(lst_arr(*a), size);
	inside = malloc(sizeof(long) * size);
	if (!inside)
		return ;
	inside = new_lst(sorted, original, inside, size);
	ft_lstclear(a);
	num = 0;
	while (num < size)
		ft_lstadd_back(a, ft_lstnew(inside[num++]));
	pb(a, b);
	pb(a, b);
	if (is_ordered(ft_lstsize(*b), lst_arr(*b)) != 1)
		sb(b);
	while (ft_lstsize(*a) > 0)
		sort_list(a, b);
	free(original);
	free(sorted);
	free(inside);
}

