/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/04 15:10:46 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/14 15:50:50 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

node *create_list(int argc, char **argv)
{
    int i;
    node *temp;

    i = 1;
    temp = NULL;
    while(i < argc)
    {
        ft_lst_insert_back(&temp, ft_atoi(argv[i]));
        i++;   
    }
    return (temp);
}

void print_list(node *list)
{
    if (list)
    {   
        while (list->next != NULL)
        {
            ft_printf("%d\n", list->data);
            list = list->next;
        }
        ft_printf("%d", list->data);
        ft_printf("\n-\na\n");
    }
}

int lstsize(node *list)
{
    int count;

    count = 0;
    while (list != NULL)
    {
        list = list->next;
        count++;   
    }
    return (count);
}

int find_max_node(node *head)
{
    int max;

    max = -2147483648;
    
    while (head != NULL)
    {
        if (max > head->data)
            max = head->data;
        head = head->next;
    }
    return (max);
}

int find_min_node(node *head)
{
    int min;

    min = 2147483647;
    
    while (head != NULL)
    {
        if (min > head->data)
            min = head->data;
        head = head->next;
    }
    return (min);
}

// int main()
// {
//     int argv[] = {5, 8, 2};
//     int argc = 3;
//     node *head;

//     head = create_list(argc, argv);
//     print_list(head);
//     //printf("argv[0]: %d\nargv[1]: %d\nargv[2]: %d\n", argv[0], argv[1], argv[2]);
//     return (0);
// }