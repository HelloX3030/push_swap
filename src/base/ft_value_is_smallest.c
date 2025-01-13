/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value_is_smallest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:56:00 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/13 15:56:01 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_value_is_smallest(int value, int compare1, int compare2,
		int compare3)
{
	if (value <= compare1 && value <= compare2 && value <= compare3)
		return (true);
	return (false);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
