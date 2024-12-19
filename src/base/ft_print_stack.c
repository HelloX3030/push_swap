/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:26:57 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/19 13:58:16 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list *stack)
{
	t_content	*content;
	int			i;

	i = 0;
	while (stack)
	{
		content = (t_content *)stack->content;
		ft_printf("     (%i)%i: %i\n", i, content->index, content->value);
		stack = stack->next;
		i++;
	}
	ft_printf("\n");
}
