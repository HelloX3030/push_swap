#include "push_swap.h"

void ft_sort_back(t_push_swap *ps)
{
	int i;
	while (ps->size_b > 0)
	{
		i = ft_get_max_stack_index(ps->b);
		ft_b_go_to_index(ps, i);
		ft_push_a(ps);
	}
}
