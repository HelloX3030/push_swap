/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:37:58 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 14:03:13 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_sorted(t_list *stack)
{
	t_content	*content_1;
	t_content	*content_2;

	if (!stack)
		return (true);
	while (stack->next)
	{
		content_1 = (t_content *)stack->content;
		content_2 = (t_content *)stack->next->content;
		if (content_1->value > content_2->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}
