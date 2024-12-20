/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:49:59 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/17 15:11:17 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (!ft_init_push_swap(&ps, argc, argv))
	{
		ft_print_error();
		return (1);
	}
	if (!ft_read_instructions(&ps))
	{
		ft_print_error();
		ft_free_push_swap(&ps);
		return (1);
	}
	if (ft_is_sorted(ps.a) && ps.size_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_free_push_swap(&ps);
	return (0);
}
