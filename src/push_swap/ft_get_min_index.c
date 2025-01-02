/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:30:06 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/19 14:46:56 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_get_min_index(t_list *stack)
{
	int min_index;
	int index;
	t_content *temp;
	int min;

	temp = (t_content *)stack->content;
	min = temp->value;
	min_index = 0;
	index = 0;
	while (stack)
	{
		temp = (t_content *)stack->content;
		if (temp->value < min)
		{
			min = temp->value;
			min_index = index;
		}
		stack = stack->next;
		index++;
	}
	return (min_index);
}
