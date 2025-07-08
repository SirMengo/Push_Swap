/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:56:57 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/08 14:35:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%ld\n",lst->content);
		lst = lst->next;
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

	(void)b;
	free(arr);
}
