/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/03 11:44:06 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:22:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static void	execute_rotate(char *line, t_node **stack_a, t_node **stack_b)
{
	if (!(ft_strcmp(line, "ra\n")) && stack_a)
		rotate(stack_a, 'x');
	else if (!(ft_strcmp(line, "rb\n")) && stack_b)
		rotate(stack_b, 'x');
	else if (!(ft_strcmp(line, "rr\n")) && stack_a && stack_b)
	{
		rotate(stack_a, 'x');
		rotate(stack_b, 'x');
	}
	else if (!(ft_strcmp(line, "rra\n")) && stack_a)
		reverse_rotate(stack_a, 'x');
	else if (!(ft_strcmp(line, "rrb\n")) && stack_b)
		reverse_rotate(stack_b, 'x');
	else if (!(ft_strcmp(line, "rrr\n")) && stack_a && stack_b)
	{
		reverse_rotate(stack_a, 'x');
		reverse_rotate(stack_b, 'x');
	}
	else
		error_func();
}

static void	execute_instruc(char *line, t_node **stack_a, t_node **stack_b)
{
	if (!(ft_strcmp(line, "sa\n")) && stack_a)
		swap(stack_a, 'x');
	else if (!(ft_strcmp(line, "sb\n")) && stack_b)
		swap(stack_b, 'x');
	else if (!(ft_strcmp(line, "ss\n")) && stack_a && stack_b)
	{
		swap(stack_a, 'x');
		swap(stack_b, 'x');
	}
	else if (!(ft_strcmp(line, "pa\n")) && stack_b)
		push(stack_b, stack_a, 'x');
	else if (!(ft_strcmp(line, "pb\n")) && stack_a)
		push(stack_a, stack_b, 'x');
	else
		execute_rotate(line, stack_a, stack_b);
}

static t_node	*put_in_stack(int size, char **input)
{
	int		*arr;
	t_node	*stack;

	arr = NULL;
	stack = NULL;
	if (check_input(size, input) == 1)
	{
		arr = pre_sort(size, input);
		stack = create_list(size - 1, arr);
		free(arr);
	}
	return (stack);
}

static void	read_operation(t_node **stack_a, t_node **stack_b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		execute_instruc(line, stack_a, stack_b);
		free(line);
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (0);
	stack_a = put_in_stack(argc, argv);
	stack_b = NULL;
	read_operation(&stack_a, &stack_b);
	if (check_list_is_sorted(stack_a) && !stack_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstfree(stack_a);
	return (0);
}
