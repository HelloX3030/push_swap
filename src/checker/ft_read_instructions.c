/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:33:20 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/17 15:10:21 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	do_swap(t_push_swap *ps, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		return (ft_swap_a(ps), 1);
	else if (ft_strcmp(line, "sb\n") == 0)
		return (ft_swap_b(ps), 1);
	else if (ft_strcmp(line, "ss\n") == 0)
		return (ft_swap_ss(ps), 1);
	return (0);
}

static int	do_push(t_push_swap *ps, char *line)
{
	if (ft_strcmp(line, "pa\n") == 0)
		return (ft_push_a(ps), 1);
	else if (ft_strcmp(line, "pb\n") == 0)
		return (ft_push_b(ps), 1);
	return (0);
}

static int	do_rotate(t_push_swap *ps, char *line)
{
	if (ft_strcmp(line, "ra\n") == 0)
		return (ft_rotate_a(ps), 1);
	else if (ft_strcmp(line, "rb\n") == 0)
		return (ft_rotate_b(ps), 1);
	else if (ft_strcmp(line, "rr\n") == 0)
		return (ft_rotate_rr(ps), 1);
	return (0);
}

static int	do_reverse_rotate(t_push_swap *ps, char *line)
{
	if (ft_strcmp(line, "rra\n") == 0)
		return (ft_reverse_rotate_a(ps), 1);
	else if (ft_strcmp(line, "rrb\n") == 0)
		return (ft_reverse_rotate_b(ps), 1);
	else if (ft_strcmp(line, "rrr\n") == 0)
		return (ft_reverse_rotate_rr(ps), 1);
	return (0);
}

int	ft_read_instructions(t_push_swap *ps)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!do_swap(ps, line))
			if (!do_push(ps, line))
				if (!do_rotate(ps, line))
					if (!do_reverse_rotate(ps, line))
						return (free(line), 0);
		free(line);
		line = get_next_line(0);
	}
	return (1);
}
