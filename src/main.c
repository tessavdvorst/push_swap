/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 14:11:28 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:06:59 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static void	push_swap(int size, int *input)
{
	int		len;
	t_node	*head;

	head = create_list(size - 1, input);
	len = ft_lstsize(head);
	if (len <= 5)
		sort_small_stack(&head, len);
	else
		sort_big_stack(&head, len);
	ft_lstfree(head);
}

int	main(int argc, char **argv)
{
	int	*input;
	int	sorted;

	sorted = 0;
	input = NULL;
	if (argc < 2)
		return (0);
	if (check_input(argc, argv) == 1)
	{
		input = pre_sort(argc, argv);
		sorted = check_if_sorted(argc - 1, input);
		if (!sorted)
			push_swap(argc, input);
		free(input);
	}
	return (0);
}
