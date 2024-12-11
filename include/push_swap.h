/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:47:27 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 14:34:37 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/get_next_line/get_next_line.h"
# include "../libft/libft/libft.h"
# include "../libft/printf/include/ft_printf.h"

// helper functions
void		ft_free_content(void *content);

// stack functions
void		ft_print_stack(t_list *stack);
int			ft_get_stack_value(t_list *stack, int i);
void		ft_set_stack_value(t_list *stack, int i, int value);
t_list		*ft_get_prev(t_list *stack, t_list *node);

typedef struct s_push_swap
{
	t_list	*a;
	t_list	*b;
	int		size_a;
	int		size_b;
}			t_push_swap;

int			ft_init_push_swap(t_push_swap *ps, int argc, char **argv);
void		ft_free_push_swap(t_push_swap *ps);
void		ft_print_push_swap(t_push_swap *ps);

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
