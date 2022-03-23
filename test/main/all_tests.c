/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   all_tests.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 11:46:34 by tvan-der      #+#    #+#                 */
/*   Updated: 2022/03/23 15:31:54 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

static void run_all_tests(void)
{
    RUN_TEST_GROUP(PushSwap);
}

int main(int argc, const char *argv[])
{
    return (UnityMain(argc, argv, run_all_tests));
}