/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:47:27 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/13 15:56:11 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/get_next_line/get_next_line.h"
# include "../libft/libft/libft.h"
# include "../libft/printf/include/ft_printf.h"

# define PRINT_COMMANDS 1

// helper functions
void		ft_free_content(void *content);
void		ft_print_error(void);
bool		ft_value_is_smallest(int value, int compare1, int compare2,
				int compare3);
int			ft_min(int a, int b);

// stack functions
void		ft_print_stack(t_list *stack);
t_list		*ft_get_prev(t_list *stack, t_list *node);
bool		ft_is_sorted(t_list *stack);
void		ft_init_lst_indexes(t_list *stack);
int			ft_value_present(t_list *stack, int value);
int			ft_get_diff(int index, int i, int start_i, int size);
int			ft_get_stack_index(t_list *stack, int target_index);
int			ft_get_min_stack_index(t_list *stack);
int			ft_get_max_stack_index(t_list *stack);
int			ft_get_index_distance(int size, int index);

typedef struct s_content
{
	int		value;
	int		index;
}			t_content;

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

// stack operations
void		ft_a_go_to_index(t_push_swap *ps, int index);
void		ft_b_go_to_index(t_push_swap *ps, int index);
void		ft_go_to_indexes(t_push_swap *ps, int a_index, int b_index);
void		ft_push_back(t_push_swap *ps);
void		ft_move_to_start(t_push_swap *ps);
void		ft_sort_back(t_push_swap *ps);
void		ft_improved_sort_back(t_push_swap *ps);
t_content	*ft_get_content(t_list *stack, int i);

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

// sorting algorithms
void		ft_bubble_sort(t_push_swap *ps);
void		ft_sort_in_b(t_push_swap *ps);
void		ft_improved_sort_in_b(t_push_swap *ps);
void		ft_stalin_sort(t_push_swap *ps);
void		ft_proxy_sort_prototype(t_push_swap *ps);
void		ft_proxy_sort(t_push_swap *ps);
void		ft_k_sort(t_push_swap *ps, int chunk_size);

// simpel sorts
void		ft_2sort(t_push_swap *ps);
void		ft_3sort(t_push_swap *ps);
void		ft_10sort(t_push_swap *ps);

// main functions
void		ft_sort(t_push_swap *ps);
void		ft_debug_sort(t_push_swap *ps, bool check_leaks);

// bonus functions
int			ft_read_instructions(t_push_swap *ps);

#endif
