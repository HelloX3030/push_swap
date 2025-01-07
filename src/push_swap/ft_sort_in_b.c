/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:45 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 15:38:35 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_in_b(t_push_swap *ps)
{
	int min_index;
	while (ps->size_a > 0)
	{
		min_index = ft_get_min_stack_index(ps->a);
		ft_a_go_to_index(ps, min_index);
		ft_push_b(ps);
	}
	ft_push_back(ps);
}
