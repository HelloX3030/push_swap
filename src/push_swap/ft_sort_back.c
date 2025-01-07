/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:30:10 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:30:11 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_back(t_push_swap *ps)
{
	int	i;

	while (ps->size_b > 0)
	{
		i = ft_get_max_stack_index(ps->b);
		ft_b_go_to_index(ps, i);
		ft_push_a(ps);
	}
}
