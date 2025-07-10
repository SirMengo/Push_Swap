/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:31:30 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/08 17:02:07 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_two(t_list **lst)
{
	t_list *n1;
	t_list *n2;

	if(!lst || !*lst|| !(*lst)->next)
		return ;
	n1 = *lst;
	n2 = n1->next;
	n1->next = n2->next;
	n2->next = n1;
	*lst = n2;
}
