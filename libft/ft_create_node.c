/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_node.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:19:27 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/02 12:43:05 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_create_node(int data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}
