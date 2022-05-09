/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_big.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/26 12:22:48 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:18:39 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static int	get_bits(int num)
{
	int	bits;

	bits = 0;
	while (num >> bits != 0)
		bits++;
	return (bits);
}

void	sort_big_stack(t_node **stack_a, int len)
{
	int		i;
	int		j;
	int		top_num;
	int		max_num;
	t_node	*stack_b;

	stack_b = NULL;
	max_num = len - 1;
	i = 0;
	while (i < get_bits(max_num))
	{
		j = 0;
		while (j < len)
		{
			top_num = (*stack_a)->data;
			if (((top_num >> i) & 1) == 1)
				rotate(stack_a, 'a');
			else
				push(stack_a, &stack_b, 'b');
			j++;
		}
		while (stack_b)
			push(&stack_b, stack_a, 'a');
		i++;
	}
}
