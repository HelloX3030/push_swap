/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:56:02 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/16 13:45:14 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (!ft_init_push_swap(&ps, argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// ft_debug_sort(&ps, false);
	ft_sort(&ps);
	ft_free_push_swap(&ps);
	return (0);
}
