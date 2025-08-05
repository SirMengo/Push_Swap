/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:31:30 by msimoes           #+#    #+#             */
/*   Updated: 2025/08/04 11:34:23 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	lst_push(t_list **dest, t_list **src)
{
	t_list	*temp;

	if (!src || !*src)
		return ;
	temp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dest, temp);
}

void	lst_rotate(t_list **lst)
{
	t_list	*aux;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	aux = *lst;
	*lst = aux->next;
	aux->next = NULL;
	ft_lstadd_back(lst, aux);
}

void	lst_reverse(t_list **lst)
{
	t_list	*aux;
	t_list	*prep;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	aux = *lst;
	while (aux->next != NULL)
	{
		prep = aux;
		aux = aux->next;
	}
	prep->next = NULL;
	ft_lstadd_front(lst, aux);
}
