/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:51:47 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/08 12:25:34 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

typedef struct s_list
{
	long			content;
	struct s_list	*next;
}	t_list;

//Libft
long	ft_atol(const char *str);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(long content);

#endif
