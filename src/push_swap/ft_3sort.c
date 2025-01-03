#include "push_swap.h"

void ft_3sort(t_push_swap *ps)
{
	int max_index;
	int min_index;

	max_index = ft_get_max_stack_index(ps->a);
	if (max_index == 0)
		ft_rotate_a(ps);
	else if (max_index == 1)
		ft_reverse_rotate_a(ps);
	min_index = ft_get_min_stack_index(ps->a);
	if (min_index == 1)
		ft_swap_a(ps);
}
