/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value_present.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:42:00 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 14:42:34 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_value_present(t_list *stack, int value)
{
	t_content	*content;

	while (stack)
	{
		content = (t_content *)stack->content;
		if (content->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}
