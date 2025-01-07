/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proxy_sort_prototype.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:31:43 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:31:46 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_proxy_sort_prototype(t_push_swap *ps)
{
	t_content	*content;
	int			target;
	int			range;

	target = 0;
	range = 10;
	while (ps->size_a > 0)
	{
		content = (t_content *)ps->a->content;
		if (content->index < target + range)
		{
			ft_push_b(ps);
			target++;
		}
		else
			ft_rotate_a(ps);
	}
	ft_sort_back(ps);
}
