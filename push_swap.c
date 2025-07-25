/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:54:05 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 11:42:26 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_local(t_list *lst)
{
    while (lst)
    {
        printf("num: %ld", lst->num);
        printf("local_a: %d ", lst->cost_a);
        printf("local_b: %d\n", lst->cost_b);
        printf("local_b: %d ", lst->cost_b);
        printf("total_cust: %d\n", lst->total_cost);
        lst = lst->next;
    }
}

void	push_swap(t_list **a, t_list **b, int argc)
{
	t_list	*node;
	int		rotate;
	
	push_nbr(a, b, argc);
	calc_a(b);
	node = calc_lst(b);
	rotate = node->cost_a;
	while (rotate < 0)
	{
		rrb(b);
		rotate++;
	}
	while (rotate > 0)
	{
		rb(b);
		rotate--;
	}
	while (ft_lstsize(*b) > 0)
		pa(a, b);
}

int main(int argc, char **argv)
{
	long	*arr;
	t_list	*a;
	t_list	*b;
	
	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	arr = handler(argc, argv);
	lst_create(&a, arr, argc - 1);
	if (argc - 1 == 2)
		pa(&a, &b);
	else if (argc - 1 == 3)
		swap_three(&a);
	else
		push_swap(&a, &b, argc - 1);
}
