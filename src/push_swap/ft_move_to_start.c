/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to_start.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:32:15 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/13 15:58:45 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_to_start(t_push_swap *ps)
{
	int	min_index;

	min_index = ft_get_min_stack_index(ps->a);
	ft_a_go_to_index(ps, min_index);
}
