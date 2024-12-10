/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:26:57 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 15:46:18 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack *stack)
{
	int	i;

	ft_printf("     Max Size: %i\n", stack->max_size);
	ft_printf("     Size: %i\n", stack->size);
	ft_printf("     Values Start: %i\n", stack->values_start);
	ft_printf("     i: %i\n", stack->i);
	ft_printf("     Values:\n");
	i = 0;
	while (i < stack->size)
	{
		ft_printf("          %i\n", ft_get_stack_value(stack, i));
		i++;
	}
	ft_printf("     Raw Values:\n");
	i = 0;
	while (i < stack->max_size)
	{
		ft_printf("          %i\n", stack->values[i]);
		++i;
	}
	ft_printf("\n");
}
