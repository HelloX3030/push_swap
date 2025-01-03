#include "push_swap.h"

void ft_improved_sort_in_b(t_push_swap *ps)
{
	int min_index;
	int max_index;
	int min_distance;
	int max_distance;

	while (ps->size_a > 3)
	{
		min_index = ft_get_min_stack_index(ps->a);
		min_distance = ft_get_index_distance(ps->size_a, min_index);
		max_index = ft_get_max_stack_index(ps->a);
		max_distance = ft_get_index_distance(ps->size_a, max_index);
		if (min_distance < max_distance)
		{
			ft_go_to_index(ps, min_index);
			ft_push_b(ps);
		}
		else
		{
			ft_go_to_index(ps, max_index);
			ft_push_b(ps);
			ft_rotate_b(ps);
		}
	}
	ft_3sort(ps);
	ft_push_back(ps);
	ft_move_to_start(ps);
}
