/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:55:49 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:03:10 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_stack_value(t_list *stack, int i)
{
	while (i-- && stack)
		stack = stack->next;
	if (stack)
		return (*(int *)stack->content);
	return (INT_MIN);
}
