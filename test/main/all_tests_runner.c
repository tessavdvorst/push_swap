/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   all_tests_runner.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 11:48:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/03/23 15:34:35 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(PushSwap)
{
    RUN_TEST_CASE(PushSwap, SimpleJoin);
}