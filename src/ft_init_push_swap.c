/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_push_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:11:25 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:32:13 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_push_swap(t_push_swap *ps, int argc, char **argv)
{
	t_list	*tmp;
	int		*new_content;

	ps->a = NULL;
	ps->b = NULL;
	ps->size_a = argc - 1;
	ps->size_b = 0;
	argv++;
	while (--argc)
	{
		new_content = malloc(sizeof(int));
		*new_content = ft_atoi(*argv);
		argv++;
		tmp = ft_lstnew(new_content);
		if (!tmp)
			return (ft_lstclear(&ps->a, ft_free_content), 0);
		if (!ps->a)
			ps->a = tmp;
		else
			ft_lstadd_back(&ps->a, tmp);
	}
	return (1);
}
