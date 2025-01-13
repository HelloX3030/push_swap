/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:34:36 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/08 15:55:01 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort(t_push_swap *ps)
{
	if (ft_is_sorted(ps->a))
		return;
	if (ps->size_a == 2)
		ft_2sort(ps);
	else if (ps->size_a == 3)
		ft_3sort(ps);
	else if (ps->size_a <= 10)
		ft_10sort(ps);
	else if (ps->size_a <= 100)
		ft_k_sort(ps, 20);
	else
		ft_k_sort(ps, 30);
}
