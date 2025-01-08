/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:34:36 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/08 14:51:49 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_push_swap *ps)
{
	if (ps->size_a == 2)
		ft_2sort(ps);
	else if (ps->size_a == 3)
		ft_3sort(ps);
	else if (ps->size_a <= 10)
		ft_10sort(ps);
	else if (ps->size_a <= 100)
		ft_chunk_proxy_sort(ps, 20);
	else
		ft_chunk_proxy_sort(ps, 50);
}
