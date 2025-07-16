/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:56:57 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/15 11:37:29 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%ld\n",lst->num);
		lst = lst->next;
	}
}

void	push_swap(int argc, t_list **a)
{
	if (argc == 2)
		sa(a);
	if (argc == 3)
		swap_three(a);
	/*if (argc >= 4)
		turk();*/
}

int	main(int argc, char **argv)
{
	long *arr;
	t_list *a;
	//t_list *b;

	a = NULL;
	//b = NULL;
	arr = handler(argc, argv);
	lst_create(&a, arr, argc - 1);
	print_list(a);
	push_swap(argc - 1, &a);
	print_list(a);
	free(arr);
}
