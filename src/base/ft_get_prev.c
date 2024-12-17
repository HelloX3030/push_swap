/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_prev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:34:49 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 14:35:20 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_prev(t_list *stack, t_list *node)
{
	t_list	*prev;

	prev = stack;
	while (prev && prev->next != node)
		prev = prev->next;
	return (prev);
}
