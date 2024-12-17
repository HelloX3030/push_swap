/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:37:58 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/16 12:57:40 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_sorted(t_list *stack)
{
	if (!stack)
		return (true);
	while (stack->next)
	{
		if (*(int *)stack->content > *(int *)stack->next->content)
			return (false);
		stack = stack->next;
	}
	return (true);
}
