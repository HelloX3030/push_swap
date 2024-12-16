/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:54:19 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/16 13:53:20 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_helper(t_push_swap *ps, int *rotations)
{
	ft_rotate_a(ps);
	*rotations = *rotations + 1;
}

static void	reset_to_start(t_push_swap *ps, int rotations)
{
	while (rotations < ps->size_a)
	{
		ft_rotate_a(ps);
		rotations++;
	}
}

void	ft_bubble_sort(t_push_swap *ps)
{
	int	rotations;
	int	value_1;
	int	value_2;

	while (!ft_is_sorted(ps->a))
	{
		rotations = 0;
		while (rotations < ps->size_a)
		{
			value_1 = *(int *)ps->a->content;
			value_2 = *(int *)ps->a->next->content;
			if (value_2 < value_1)
			{
				ft_swap_a(ps);
				break ;
			}
			else
				rotate_helper(ps, &rotations);
		}
		reset_to_start(ps, rotations);
	}
}
