/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 13:17:37 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/14 16:32:45 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void sort_small_stack(node **head)
{
    int size;

    size = lstsize(*head);
    if (size == 2)
        sa(head);
    if (size == 3)
        sort_three(head);
    if (size == 4)
        sort_four(head);
}

void sort_three(node **head)
{
    int top;
    int middle;
    int bottom;
    
    top = (*head)->data;
    middle = (*head)->next->data;
    bottom = (*head)->next->next->data;
    if (top > middle && middle < bottom && bottom > top)
        sa(head);
    else if (top > middle && middle > bottom && bottom < top)
    {   
        sa(head);
        rra(head);
    }
    else if (top > middle && middle < bottom && bottom < top)
        ra(head);
    else if (top < middle && middle > bottom && bottom > top)
    {   
        sa(head);
        ra(head);
    }
    else if (top < middle && middle > bottom && bottom < top)
        rra(head);
}

void sort_four(node **head)
{
    //node *head_b;
    node *temp;
    
    temp = *head;
    while (temp->data != find_min_node(temp))
    {
        ra(head);
        print_list(*head);
        temp = temp->next;
    }
    // pb(head, &head_b);
    // print_list(*head);
    // sort_three(head);
    // print_list(*head);
    // pb(&head_b, head);
}