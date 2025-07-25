/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:59:44 by msimoes           #+#    #+#             */
/*   Updated: 2025/07/25 12:46:45 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_non_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		if (argv[i][j] == '\0')
			return (1);
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static long	*conv_long_arr(int argc, char **argv)
{
	long	i;
	long	*arr;

	arr = malloc(sizeof(long) * (argc - 1));
	if (!arr)
		err_args(arr);
	i = 1;
	while (i < argc)
	{
		arr[i - 1] = ft_atol(argv[i]);
		i++;
	}
	return (arr);
}

static int	is_dup(int argc, long *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	is_int_limit(int argc, long *arr)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (arr[i] > INT_MAX || arr[i] < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

long	*handler(int argc, char **argv)
{
	long	*arr;

	arr = NULL;
	if (is_non_num(argc, argv) == 1)
		err_args(arr);
	arr = conv_long_arr(argc, argv);
	if (is_dup(argc - 1, arr) == 1)
		err_args(arr);
	if (is_int_limit(argc - 1, arr) == 1)
		err_args(arr);
	if (is_ordered(argc - 1, arr) == 0)
	{
		free(arr);
		exit(0);
	}
	return (arr);
}
