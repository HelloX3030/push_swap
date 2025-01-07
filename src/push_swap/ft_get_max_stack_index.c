/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_stack_index.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:34:36 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:34:38 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max_stack_index(t_list *stack)
{
	int			max_index;
	int			index;
	t_content	*temp;
	int			max;

	temp = (t_content *)stack->content;
	max = temp->value;
	max_index = 0;
	index = 0;
	while (stack)
	{
		temp = (t_content *)stack->content;
		if (temp->value > max)
		{
			max = temp->value;
			max_index = index;
		}
		stack = stack->next;
		index++;
	}
	return (max_index);
}
