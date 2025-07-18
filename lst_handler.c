/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:32:34 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/15 10:15:49 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_create(t_list **stack, long *arr, int argc)
{
	int		i;
	t_list	*node;

	i = 0;
	while(i < argc)
	{
		node = ft_lstnew(arr[i]);
		ft_lstadd_back(stack, node);
		i++;
	}
}
