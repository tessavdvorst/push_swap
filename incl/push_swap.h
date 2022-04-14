/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 15:32:54 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/04/14 16:27:25 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

// check input 

int check_input(char *str);
int check_if_sorted(node *list);

// list functions

// node *create_node(int data);
void insert_back(node **head, int data);
node *create_list(int argc, char **argv);
void print_list(node *list);
int lstsize(node *list);
int find_min_node(node *head);
int find_max_node(node *head);


// operations

void sa(node **head);
void pb(node **head_a, node **head_b);
void ra(node **head);
void rra(node **head);

// sorting

void sort_three(node **head);
void sort_four(node **head);
void sort_small_stack(node **head);

// push_swap

void push_swap(int argc, char **argv);



#endif