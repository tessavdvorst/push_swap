/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/07 15:23:33 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/06 18:08:07 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	swap(t_node **head, char c)
{
	t_node	*temp;

	if (!*head || !(*head)->next)
		return ;
	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next = *head;
	*head = temp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}

void	push(t_node **head_a, t_node **head_b, char c)
{
	t_node	*temp_a;

	if (!*head_a)
		return ;
	temp_a = (*head_a)->next;
	(*head_a)->next = (*head_b);
	*head_b = *head_a;
	*head_a = temp_a;
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}

void	rotate(t_node **head, char c)
{
	t_node	*temp;
	t_node	*current;

	if (!*head || !(*head)->next)
		return ;
	temp = (*head)->next;
	(*head)->next = NULL;
	current = temp;
	while (current->next != NULL)
		current = current->next;
	current->next = *head;
	*head = temp;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	reverse_rotate(t_node **head, char c)
{
	t_node	*current;
	t_node	*temp;

	if (!*head || !(*head)->next)
		return ;
	current = (*head);
	while (current->next != NULL)
		current = current->next;
	temp = (*head);
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next = NULL;
	current->next = (*head);
	(*head) = current;
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	rotate_stack(t_node **stack, char c)
{
	int		min_val;
	int		index_middle;
	int		index_min_val;
	t_node	*temp;

	temp = *stack;
	index_middle = ft_lstsize(*stack) / 2;
	min_val = find_min_node(*stack);
	index_min_val = find_index_min_node(temp, min_val);
	if (index_min_val < index_middle)
	{
		while ((*stack)->data != min_val)
			rotate(stack, c);
	}
	else
	{
		while ((*stack)->data != min_val)
			reverse_rotate(stack, c);
	}
}
