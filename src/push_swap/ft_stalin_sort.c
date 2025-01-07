/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stalin_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:29:16 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:29:18 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stalin_sort(t_push_swap *ps)
{
	int			i;
	int			start_size;
	int			prev_value;
	t_content	*content;

	i = 0;
	start_size = ps->size_a;
	prev_value = INT_MIN;
	while (i < start_size)
	{
		content = (t_content *)ps->a->content;
		if (content->value < prev_value)
			ft_push_b(ps);
		else
		{
			prev_value = content->value;
			ft_rotate_a(ps);
		}
		i++;
	}
}
