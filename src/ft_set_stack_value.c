/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_stack_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:57:39 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 12:59:09 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_stack_value(t_list *stack, int i, int value)
{
	while (i-- && stack)
		stack = stack->next;
	if (stack)
		*(int *)stack->content = value;
}
