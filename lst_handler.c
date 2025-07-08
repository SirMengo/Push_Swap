/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:32:34 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/08 11:50:37 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	lst_create(t_list **stack, long *arr)
{
	int		i;
	t_list	*node;

	i = 0;
	while(arr[i])
	{
		node = ft_lstnew(arr[i++]);
		ft_lstadd_back(stack, node);
	}
}
