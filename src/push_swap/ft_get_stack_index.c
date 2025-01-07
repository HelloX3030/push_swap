/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:33:19 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:33:22 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_stack_index(t_list *stack, int target_index)
{
	t_content	*content;
	int			i;

	i = 0;
	while (stack)
	{
		content = (t_content *)stack->content;
		if (content->index == target_index)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}
