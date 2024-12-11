/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_push_swap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:19:32 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:21:43 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_push_swap(t_push_swap *ps)
{
	ft_printf("\n------------------------\n");
	ft_printf("print_push_swap\n");
	ft_printf("Stack A:\n");
	ft_print_stack(ps->a);
	ft_printf("Stack B:\n");
	ft_print_stack(ps->b);
}
