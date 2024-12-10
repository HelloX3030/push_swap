/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_push_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:11:25 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 15:44:08 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_push_swap(t_push_swap *ps, int argc, char **argv)
{
	// init max_size for testing purposes
	// ps->max_size = argc - 1;
	(void)argc;
	if (!ft_init_stack(&ps->stack_a, 10))
		return (0);
	if (!ft_init_stack(&ps->stack_b, 10))
	{
		free(ps->stack_a.values);
		return (0);
	}
	// parse argv
	(void)argv;
	return (1);
}
