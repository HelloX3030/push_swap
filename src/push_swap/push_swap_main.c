/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:56:02 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:28:13 by lseeger          ###   ########.fr       */
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
	ft_sort(&ps);
	ft_free_push_swap(&ps);
	return (0);
}
