/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:32:34 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 12:49:26 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_create(t_list **stack, long *arr, int argc)
{
	int		i;
	t_list	*node;

	i = 0;
	while (i < argc)
	{
		node = ft_lstnew(arr[i]);
		ft_lstadd_back(stack, node);
		i++;
	}
}

long	*lst_arr(t_list *lst)
{
	t_list	*aux;
	long	*arr;
	int		i;

	i = 0;
	aux = lst;
	arr = malloc(sizeof(long) * ft_lstsize(lst));
	if (!arr)
		return (NULL);
	while (aux)
	{
		arr[i] = aux->num;
		aux = aux->next;
		i++;
	}
	return (arr);
}

long	*new_lst(long *sort, long *orig, long *inside, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (orig[j] == sort[i])
			{
				inside[j] = i + 1;
				break ;
			}
			i++;
		}
		j++;
	}
	return (inside);
}
