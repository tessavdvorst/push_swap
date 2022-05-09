/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 15:32:54 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/05/09 15:19:58 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

// check input 

int		check_input(int argc, char **argv);
int		check_if_sorted(int size, int *arr);
void	error_func(void);

// list functions

int		find_min_node(t_node *head);
int		find_max_node(t_node *head);
int		find_index_min_node(t_node *head, int data);
int		check_list_is_sorted(t_node *stack);

// operations

void	swap(t_node **head, char c);
void	push(t_node **head_a, t_node **head_b, char c);
void	rotate(t_node **head, char c);
void	reverse_rotate(t_node **head, char c);
void	rotate_stack(t_node **stack, char c);

// pre sorting

int		*pre_sort(int size, char **input);

// sorting

void	sort_small_stack(t_node **head, int len);
void	sort_big_stack(t_node **head, int len);

#endif