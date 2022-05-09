/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_list.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 12:30:01 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/02 12:44:19 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*create_list(int size, int *data)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = NULL;
	while (i < size)
	{
		ft_lst_insert_back(&temp, data[i]);
		i++;
	}
	return (temp);
}
