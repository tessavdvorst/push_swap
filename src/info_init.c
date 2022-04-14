/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   info_init.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 14:22:35 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/07 12:33:29 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int check_input(char *str)
{
    int num;
    char *conversion;
    
    num = ft_atoi(str);
    conversion = ft_itoa(num);
    if (ft_strcmp(str, conversion) == 0)
        return (1);
    else
        return (0);       
}

int check_if_sorted(node *list)
{
    while (list->next != NULL)
    {
        if (list->data > list->next->data)
            return (0);
        list = list->next;
    }
    return (1);
}