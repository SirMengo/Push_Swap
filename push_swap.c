/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:56:57 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/18 15:16:36 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("Num: %ld\n",lst->num);
		printf("Cost A: %i\n",lst->cost_a);
		printf("Cost B: %i\n",lst->cost_b);
		printf("T_Cost: %i\n",lst->total_cost);
		lst = lst->next;
	}
}

void	push_swap(int argc, t_list **a, t_list **b)
{
	if (argc == 2)
		sa(a);
	if (argc == 3)
		swap_three(a);
	if (argc >= 4)
	{
		pb(b, a);
		pb(b, a);
		calc_a(a);
		calc_a(b);
		calc_rotate(a, b);
		cost_total(a);
	}
}

int	main(int argc, char **argv)
{
	long *arr;
	t_list *a;
	t_list *b;

	a = NULL;
	b = NULL;
	arr = handler(argc, argv);
	lst_create(&a, arr, argc - 1);
	push_swap(argc - 1, &a, &b);
	printf("LISTA A:\n");
	print_list(a);
	printf("LISTA B:\n");
	print_list(b);
	free(arr);
}
