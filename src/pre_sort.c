/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pre_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/22 14:55:15 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:17:34 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static int	*char_to_int_arr(int size, char **str)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	j = 1;
	if (!str)
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (i <= size && j < size)
	{
		arr[i] = ft_atoi(str[j]);
		i++;
		j++;
	}
	arr[i] = 0;
	return (arr);
}

static void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	bubblesort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	if (!arr)
		return ;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap_int(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

static void	change_to_index(int *arr1, int *arr2, int size)
{
	int	i;
	int	j;

	i = 0;
	if (!arr1 || !arr2)
		return ;
	while (i < size)
	{
		j = 0;
		while (j < size && arr1[i] != arr2[j])
			j++;
		arr1[i] = j;
		i++;
	}
}

int	*pre_sort(int size, char **input)
{
	int	*new;
	int	*original;

	original = char_to_int_arr(size, input);
	new = char_to_int_arr(size, input);
	bubblesort(new, size - 1);
	change_to_index(original, new, size - 1);
	free(new);
	return (original);
}
