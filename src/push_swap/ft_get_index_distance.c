/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index_distance.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:34:51 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/07 15:34:54 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index_distance(int size, int index)
{
	int	reversed_distance;

	reversed_distance = size - index;
	if (index < reversed_distance)
		return (index);
	else
		return (reversed_distance);
}
