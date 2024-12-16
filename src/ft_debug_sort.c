/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:42:06 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/16 13:11:37 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_leaks(void)
{
	system("leaks push_swap");
}

void	ft_debug_sort(t_push_swap *ps, bool check_leaks)
{
	ft_printf("debug_sort\n");
	ft_printf("Start State:\n");
	ft_print_push_swap(ps);
	ft_sort(ps);
	ft_printf("End State:\n");
	ft_print_push_swap(ps);
	ft_printf("is_sorted: %i\n", ft_is_sorted(ps->a));
	if (check_leaks)
		atexit(ft_check_leaks);
}
