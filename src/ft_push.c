/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:44:21 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:53:16 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!*src)
		return (0);
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
	return (1);
}

void	ft_push_a(t_push_swap *ps)
{
	int	result;

	result = push(&ps->b, &ps->a);
	if (result)
	{
		ps->size_a++;
		ps->size_b--;
	}
	write(1, "pa\n", 3);
}

void	ft_push_b(t_push_swap *ps)
{
	int	result;

	result = push(&ps->a, &ps->b);
	if (result)
	{
		ps->size_a--;
		ps->size_b++;
	}
	write(1, "pb\n", 3);
}
