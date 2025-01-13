/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_content.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:59:19 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/13 15:59:21 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_content	*ft_get_content(t_list *stack, int i)
{
	t_content	*content;

	while (i--)
		stack = stack->next;
	content = (t_content *)stack->content;
	return (content);
}
