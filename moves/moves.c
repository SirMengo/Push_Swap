/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:31:30 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/17 10:06:44 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

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

void	swap_three(t_list **a)
{
	t_list *aux;

	aux = *a;
	if (aux->num > aux->next->num && aux->num < aux->next->next->num)
		sa(a);
	else if (aux->num < aux->next->num && aux->num < aux->next->next->num)
	{
		rra(a);
		sa(a);
	}
	else if(aux->num < aux->next->num && aux->num > aux->next->next->num)
		rra(a);
	else if (aux->num > aux->next->num && aux->num > aux->next->next->num)
	{
		ra(a);
		aux = *a;
		if (aux->num > aux->next->num)
			sa(a);
	}
}

void	lst_push(t_list **dest, t_list **src)
{
	t_list	*temp;

	if (!src || !*src)
		return ;
	temp = *src;
	*src = (*src)->next;
	ft_lstadd_back(dest, temp);
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
	t_list *aux;
	t_list *prep;

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
