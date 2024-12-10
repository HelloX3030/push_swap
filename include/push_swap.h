/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:47:27 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 16:09:49 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/get_next_line/get_next_line.h"
# include "../libft/libft/libft.h"
# include "../libft/printf/include/ft_printf.h"

typedef struct s_stack
{
	int		*values;
	int		values_start;
	int		max_size;
	int		size;
	int		i;
}			t_stack;
int			ft_init_stack(t_stack *stack, int max_size);
void		ft_print_stack(t_stack *stack);
void		ft_add_stack_value(t_stack *stack, int value);
int			ft_remove_stack_value(t_stack *stack);
void		ft_set_random_stack_values(t_stack *stack);

typedef struct s_push_swap
{
	// sizes
	t_stack	stack_a;
	t_stack	stack_b;
}			t_push_swap;

int			ft_check_args(int argc, char **argv);
int			ft_init_push_swap(t_push_swap *ps, int argc, char **argv);
void		ft_free_push_swap(t_push_swap *ps);
void		ft_print_push_swap(t_push_swap *ps);
int			ft_get_stack_index(t_stack *stack, int i);
int			ft_get_stack_value(t_stack *stack, int i);

// swap
void		ft_swap_a(t_push_swap *ps);
void		ft_swap_b(t_push_swap *ps);
void		ft_swap_ss(t_push_swap *ps);

// push
void		ft_push_a(t_push_swap *ps);
void		ft_push_b(t_push_swap *ps);

// rotate
void		ft_rotate_a(t_push_swap *ps);
void		ft_rotate_b(t_push_swap *ps);
void		ft_rotate_rr(t_push_swap *ps);

// reverse rotate
void		ft_reverse_rotate_a(t_push_swap *ps);
void		ft_reverse_rotate_b(t_push_swap *ps);
void		ft_reverse_rotate_rr(t_push_swap *ps);

#endif
