/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_push_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:11:25 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/16 15:14:09 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parse_str(t_push_swap *ps, char *str)
{
	t_list	*tmp;
	int		*new_content;

	if (!ft_aisi(str))
		return (0);
	new_content = malloc(sizeof(int));
	if (!new_content)
		return (0);
	*new_content = ft_atoi(str);
	tmp = ft_lstnew(new_content);
	if (!tmp)
		return (ft_free_content(new_content), 0);
	if (!ps->a)
		ps->a = tmp;
	else
		ft_lstadd_back(&ps->a, tmp);
	ps->size_a++;
	return (1);
}

static int	parse_split(t_push_swap *ps, char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (!parse_str(ps, split[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_init_push_swap(t_push_swap *ps, int argc, char **argv)
{
	char	**split;
	int		i;
	int		result;

	ps->a = NULL;
	ps->b = NULL;
	ps->size_a = 0;
	ps->size_b = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (ft_lstclear(&ps->a, ft_free_content), 0);
		result = parse_split(ps, split);
		ft_free_strs(split);
		if (!result)
			return (ft_lstclear(&ps->a, ft_free_content), 0);
		i++;
	}
	return (1);
}
