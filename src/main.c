/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:56:02 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:48:32 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_leaks(void)
{
	system("leaks push_swap");
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	atexit(check_leaks);
	if (!ft_init_push_swap(&ps, argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_print_push_swap(&ps);
	ft_swap_a(&ps);
	ft_print_push_swap(&ps);
	ft_push_b(&ps);
	ft_print_push_swap(&ps);
	ft_push_a(&ps);
	ft_print_push_swap(&ps);
	ft_print_push_swap(&ps);
	ft_free_push_swap(&ps);
	return (0);
}
