/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:25:24 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 12:38:23 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err_args(long *arr)
{
	free(arr);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_arr(long *original, long *sorted, long *inside)
{
	free(original);
	free(sorted);
	free(inside);
}
