/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:56:09 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/23 15:07:13 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*bubble_sort(long *arr, int size)
{
	int	i;
	int	j;
	int	tmp;
	
	i = 0;
	while(i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{		
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

void	calc_all(t_list **a, t_list **b)
{
	calc_a(a);
	calc_a(b);
	calc_rotate(a, b);
	cost_total(a);
}
