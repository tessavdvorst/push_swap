/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 13:17:37 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:20:43 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static void	sort_three(t_node **head)
{
	int	top;
	int	middle;
	int	bottom;

	top = (*head)->data;
	middle = (*head)->next->data;
	bottom = (*head)->next->next->data;
	if (top > middle && middle < bottom && bottom > top)
		swap(head, 'a');
	else if (top > middle && middle > bottom && bottom < top)
	{
		swap(head, 'a');
		reverse_rotate(head, 'a');
	}
	else if (top > middle && middle < bottom && bottom < top)
		rotate(head, 'a');
	else if (top < middle && middle > bottom && bottom > top)
	{
		swap(head, 'a');
		rotate(head, 'a');
	}
	else if (top < middle && middle > bottom && bottom < top)
		reverse_rotate(head, 'a');
}

static void	sorting_small(t_node **stack_a)
{
	int		lst_len;
	t_node	*stack_b;

	stack_b = NULL;
	lst_len = ft_lstsize(*stack_a);
	while (lst_len > 3)
	{
		rotate_stack(stack_a, 'a');
		push(stack_a, &stack_b, 'b');
		lst_len--;
	}
	sort_three(stack_a);
	while (stack_b)
		push(&stack_b, stack_a, 'a');
}

void	sort_small_stack(t_node **head, int size)
{
	if (size == 2)
		swap(head, 'a');
	else if (size == 3)
		sort_three(head);
	else
		sorting_small(head);
}
