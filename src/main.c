/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:56:02 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 16:25:37 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;

	(void)argc;
	(void)argv;
	ft_init_stack(&stack, 10);
	stack.size = 4;
	ft_set_random_stack_values(&stack);
	ft_print_stack(&stack);
	ft_remove_stack_value(&stack);
	ft_add_stack_value(&stack, 42);
	ft_print_stack(&stack);
	// t_push_swap	ps;
	// if (!ft_check_args(argc, argv))
	// {
	// 	write(2, "Error\n", 6);
	// 	return (1);
	// }
	// if (!ft_init_push_swap(&ps, argc, argv))
	// {
	// 	write(2, "Error\n", 6);
	// 	return (1);
	// }
	// ft_set_random_values(&ps);
	// ft_print_push_swap(&ps);
	// ft_push_a(&ps);
	// ft_print_push_swap(&ps);
	// // Do stuff
	// ft_free_push_swap(&ps);
	return (0);
}
