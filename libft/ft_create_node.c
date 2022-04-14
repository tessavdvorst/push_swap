/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_node.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:19:27 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/14 15:29:07 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node *ft_create_node(int data)
{
    node *new;
    
    new = (node *)malloc(sizeof(node *));
    if (!new)
        return (NULL);
    new->data = data;
    new->next = NULL;
    return (new);
}