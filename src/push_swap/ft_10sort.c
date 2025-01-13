/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_10sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:54:54 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/08 15:42:41 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_10sort(t_push_swap *ps)
{
	int max_i = ps->size_a - 1;
	t_content *content;

	while (ps->size_a > 3)
	{
		content = (t_content *)ps->a->content;
		if (content->index == max_i)
			ft_rotate_a(ps);
		else
			ft_push_b(ps);
	}
	ft_3sort(ps);
	ft_improved_sort_back(ps);
}
