/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 12:25:32 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/02 12:42:18 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_node *list)
{
	while (list != NULL)
	{
		ft_printf("%d\n", list->data);
		list = list->next;
	}
}
