/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:51:47 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/03 14:47:51 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

//Libft
long	ft_atol(const char *str);
int		ft_isdigit(int c);
void	lst_create(t_list **stack, long *arr);
void	ft_lstadd_back(t_list **lst, t_list *new);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
