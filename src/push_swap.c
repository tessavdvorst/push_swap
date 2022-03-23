/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 14:11:28 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/03/23 17:04:29 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "unity_fixture.h"
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

// argc = amount of numbers that need to be sorted

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if (argc < 2)
        ft_printf("Please enter numbers to be sorted.\n");
    if (check_input(argv[1]))
        ft_printf("Success, input is valid\n");
    else
        ft_printf("Error, input not valid\n");
    return (0);
}