/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:26:57 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:00:45 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list *stack)
{
	while (stack)
	{
		ft_printf("     %i\n", *(int *)stack->content);
		stack = stack->next;
	}
	ft_printf("\n");
}
