/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/07 15:23:33 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/13 15:26:00 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdio.h>

void sa(node **head) // swap a (& b)
{
    node *temp;
    
    if (!*head || !(*head)->next)
        return ;    
    temp = (*head)->next;
    (*head)->next = temp->next;
    temp->next = *head;
    *head = temp;
    ft_printf("sa\n");
}

void pb(node **head_a, node **head_b)
{
    node *temp_a;

    if (!*head_a)
        return ;
    temp_a = (*head_a)->next;
    (*head_a)->next = (*head_b);
    *head_b = *head_a;
    *head_a = temp_a;
    ft_printf("pb\n");
}

void ra(node **head) // rotate a (& b)
{
    node *temp;
    node *current;

    if (!*head || !(*head)->next)
        return ;
    temp = (*head)->next;
    (*head)->next = NULL;
    current = temp;
    while (current->next != NULL)
        current = current->next;
    current->next = *head;
    *head = temp;
    ft_printf("ra\n");
}

void rra(node **head) // reverse rotate a (& b)
{
    node *current;
    node *temp;

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
    ft_printf("rra\n");
}

// void print_list_a(node *list)
// {
//     if (list)
//     {   
//         while (list->next != NULL)
//         {
//             printf("%d\n", list->data);
//             list = list->next;
//         }
//         printf("%d", list->data);
//         printf("\n-\na\n\n");
//     }
// }

// void print_list_b(node *list)
// {
//     if (list)
//     {   
//         while (list->next != NULL)
//         {
//             printf("%d\n", list->data);
//             list = list->next;
//         }
//         printf("%d", list->data);
//         printf("\n-\nb\n");
//     }
// }

// int main()
// {
//     node *head = NULL;
//     node *second = NULL;
//     node *third = NULL;
//     node *fourth = NULL;
//     node *head2 = NULL;
    
//     head = (node *)malloc(sizeof(node *));
//     second = (node *)malloc(sizeof(node *));
//     third = (node *)malloc(sizeof(node *));
//     fourth = (node *)malloc(sizeof(node *));
//     head2 = (node *)malloc(sizeof(node *));
    
//     head->data = 3;
//     head->next = second;
    
//     second->data = 2;
//     second->next = third;

//     third->data = 4;
//     third->next = fourth;

//     fourth->data = 7;
//     fourth->next = NULL;

//     head2->data = 1;
//     head2->next = NULL;
    
//     print_list_a(head);
//     print_list_b(head2);
//     sa(&head);
//     printf("\nsa:\n\n");
//     print_list_a(head);
//     ra(&head);
//     printf("\nra:\n\n");
//     print_list_a(head);
//     rra(&head);
//     printf("\nrra:\n\n");
//     print_list_a(head);
//     pb(&head, &head2);
//     printf("\npb:\n\n");
//     print_list_a(head);
//     print_list_b(head2);
//     return (0);
// }