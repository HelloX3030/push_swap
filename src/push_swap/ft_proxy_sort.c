/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proxy_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:31:13 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/08 14:48:26 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_above(t_push_swap *ps, t_content *content, int middle,
		int *range)
{
	if (content->index >= middle && content->index < middle + *range / 2)
	{
		*range += 1;
		ft_push_b(ps);
		return (true);
	}
	return (false);
}

static bool	check_below(t_push_swap *ps, t_content *content, int middle,
		int *range)
{
	if (content->index <= middle && content->index > middle - *range / 2)
	{
		ft_push_b(ps);
		ft_rotate_b(ps);
		*range += 1;
		return (true);
	}
	return (false);
}

void	ft_proxy_sort(t_push_swap *ps)
{
	t_content	*content;
	int			middle;
	int			range;

	middle = ps->size_a / 2;
	range = 10;
	while (ps->size_a > 0)
	{
		content = (t_content *)ps->a->content;
		if (check_above(ps, content, middle, &range))
			continue ;
		else if (check_below(ps, content, middle, &range))
			continue ;
		else
			ft_rotate_a(ps);
	}
	ft_sort_back(ps);
}
