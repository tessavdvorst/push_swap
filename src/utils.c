/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/04 15:10:46 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 11:42:08 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	find_max_node(t_node *head)
{
	int	max;

	max = -2147483648;
	while (head != NULL)
	{
		if (max > head->data)
			max = head->data;
		head = head->next;
	}
	return (max);
}

int	find_min_node(t_node *head)
{
	int	min;

	min = 2147483647;
	while (head != NULL)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}

int	find_index_min_node(t_node *head, int data)
{
	int	i;

	i = 0;
	while (head->data != data)
	{
		i++;
		head = head->next;
	}
	return (i);
}

int	check_list_is_sorted(t_node *stack)
{
	int	i;

	i = 0;
	while (stack->next != NULL)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	error_func(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
