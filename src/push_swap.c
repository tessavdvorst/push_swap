/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 14:11:28 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/14 15:30:39 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "unity_fixture.h"
#include "../incl/push_swap.h"

void push_swap(int argc, char **argv)
{
    node *head;
    
    head = create_list(argc, argv);
    if (check_if_sorted(head))
        ft_printf("Stack is already sorted\n\n");
    else
    {
        ft_printf("Stack is not sorted\n\n");
        if (lstsize(head) <= 5)
        {    
            ft_printf("Sorting...\n\n");
            sort_small_stack(&head);
        }
    }
    ft_printf("\n");
    print_list(head);
}

int main(int argc, char **argv)
{
    int i;
    
    if (argc < 2)
        ft_printf("Please enter numbers to be sorted.\n");
    else 
    {
        i = 1;
        while (i < argc)
        {
            if (!check_input(argv[i]))
            {
                ft_printf("Error, input not valid\n");
                exit(0);
            }
            i++;
        }
    push_swap(argc, argv);
    }
    
    return (0);
}