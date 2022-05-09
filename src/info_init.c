/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   info_init.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 14:22:35 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:21:15 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static int	check_isdigit(char *str)
{
	int		num;
	int		result;
	char	*conversion;

	num = ft_atoi(str);
	conversion = ft_itoa(num);
	result = ft_strcmp(str, conversion);
	free(conversion);
	if (result == 0)
		return (1);
	else
		return (0);
}

static int	check_dup(int size, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_if_sorted(int size, int *arr)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_input(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!check_isdigit(argv[i]))
			error_func();
		i++;
	}
	if (check_dup(argc, argv) == 0)
		error_func();
	return (1);
}
