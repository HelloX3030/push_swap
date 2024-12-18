/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:54:19 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 13:53:12 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_helper(t_push_swap *ps, int *rotations)
{
	ft_rotate_a(ps);
	(*rotations)++;
}

static void	reverse_rotate_helper(t_push_swap *ps, int rotations)
{
	while (rotations > 0)
	{
		ft_reverse_rotate_a(ps);
		rotations--;
	}
}

void	ft_bubble_sort(t_push_swap *ps)
{
	int			rotations;
	t_content	*content_1;
	t_content	*content_2;
	int			size;

	size = ps->size_a;
	while (!ft_is_sorted(ps->a))
	{
		rotations = 0;
		while (rotations < size - 1)
		{
			content_1 = (t_content *)ps->a->content;
			content_2 = (t_content *)ps->a->next->content;
			if (content_1->value > content_2->value)
				ft_swap_a(ps);
			rotate_helper(ps, &rotations);
		}
		reverse_rotate_helper(ps, rotations);
		size--;
	}
}
