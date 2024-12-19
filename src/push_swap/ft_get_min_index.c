/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:30:06 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/19 14:46:56 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min_diff_index(t_list *stack, int size)
{
	int	min_diff;
	int	min_i;
	int	start_i;

	min_diff = ft_get_total_diff(stack, 0, size);
	min_i = 0;
	start_i = 0;
	while (start_i < size)
	{
		if (ft_get_total_diff(stack, start_i, size) < min_diff)
		{
			min_diff = ft_get_total_diff(stack, start_i, size);
			min_i = start_i;
		}
		start_i++;
	}
	return (min_i);
}
