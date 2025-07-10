/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:56:57 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/09 14:47:22 by msimoes          ###   ########.fr       */
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
	sa(&a);
	print_list(a);
	
	free(arr);
}
