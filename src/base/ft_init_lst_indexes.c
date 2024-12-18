/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_lst_indexes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:12:02 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 14:34:35 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_min(t_list *lst)
{
	t_list		*min;
	t_content	*content_min;
	t_content	*content_check;

	min = lst;
	content_min = (t_content *)lst->content;
	while (lst)
	{
		content_check = (t_content *)lst->content;
		if (content_check->value < content_min->value)
		{
			min = lst;
			content_min = content_check;
		}
		lst = lst->next;
	}
	return (min);
}

static t_list	*get_next_min(t_list *lst, int current_min)
{
	t_list		*min;
	t_content	*content_check;

	min = NULL;
	while (lst)
	{
		content_check = (t_content *)lst->content;
		if ((min == NULL
				|| content_check->value < ((t_content *)min->content)->value)
			&& content_check->value > current_min)
		{
			min = lst;
		}
		lst = lst->next;
	}
	return (min);
}

void	ft_init_lst_indexes(t_list *stack)
{
	t_list		*node;
	t_content	*content;
	int			current_min;
	int			index;

	index = 0;
	node = get_min(stack);
	while (node)
	{
		content = (t_content *)node->content;
		content->index = index;
		current_min = content->value;
		index++;
		node = get_next_min(stack, current_min);
	}
}
