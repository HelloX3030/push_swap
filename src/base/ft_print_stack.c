/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:26:57 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 13:56:19 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list *stack)
{
	t_content	*content;

	while (stack)
	{
		content = (t_content *)stack->content;
		ft_printf("     %i: %i\n", content->index, content->value);
		stack = stack->next;
	}
	ft_printf("\n");
}
