/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_push_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:12:59 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:17:04 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_push_swap(t_push_swap *ps)
{
	ft_lstclear(&ps->a, ft_free_content);
	ft_lstclear(&ps->b, ft_free_content);
}
