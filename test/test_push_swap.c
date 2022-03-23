/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_push_swap.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 11:39:28 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/03/23 16:41:37 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"
#include "../incl/push_swap.h"

TEST_GROUP(PushSwap);

TEST_SETUP(PushSwap)
{
}

TEST_TEAR_DOWN(PushSwap)
{
}

TEST(PushSwap, SimpleSwap)
{
    char arrofnum = [[1],] 
    TEST_ASSERT_EQUAL_STRING(1, ft_isint(arrofnum));
}