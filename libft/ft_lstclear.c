/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:09:07 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/18 15:37:49 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list *aux;
	
	if (!lst)
		return ;
	while(lst)
	{
		aux = *lst;
		*lst = (*lst)->next;
		free(aux);
	}
}
