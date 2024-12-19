/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_total_diff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:32:07 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/19 14:38:19 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_total_diff(t_list *stack, int start_i, int size)
{
	int			total_diff;
	t_content	*content_1;
	int			i;

	total_diff = 0;
	i = 0;
	while (stack->next)
	{
		content_1 = (t_content *)stack->content;
		total_diff += ft_get_diff(content_1->index, i, start_i, size);
		stack = stack->next;
		i++;
	}
	return (total_diff);
}
