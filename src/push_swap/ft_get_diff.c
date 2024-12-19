/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_diff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:33:44 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/19 14:33:52 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_diff(int index, int i, int start_i, int size)
{
	int	diff;

	diff = index - i - start_i;
	if (diff < 0)
		diff += size;
	return (diff);
}
