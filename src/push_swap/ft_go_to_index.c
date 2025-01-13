/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_go_to_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:32:58 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:33:00 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_a_go_to_index(t_push_swap *ps, int index)
{
	if (index < ps->size_a / 2)
	{
		while (index > 0)
		{
			ft_rotate_a(ps);
			index--;
		}
	}
	else
	{
		while (index < ps->size_a)
		{
			ft_reverse_rotate_a(ps);
			index++;
		}
	}
}

void ft_b_go_to_index(t_push_swap *ps, int index)
{
	if (index < ps->size_b / 2)
	{
		while (index > 0)
		{
			ft_rotate_b(ps);
			index--;
		}
	}
	else
	{
		while (index < ps->size_b)
		{
			// ft_printf("Gooooo\n");
			ft_reverse_rotate_b(ps);
			index++;
		}
	}
}
