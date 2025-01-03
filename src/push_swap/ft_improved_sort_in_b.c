#include "push_swap.h"

static int handle_result(t_push_swap *ps, int stack_below_index, int stack_above_index)
{
	int below_distance;
	int above_distance;

	below_distance = ft_get_index_distance(ps->size_a, stack_below_index);
	above_distance = ft_get_index_distance(ps->size_a, stack_above_index);
	if (below_distance < above_distance)
	{
		ft_go_to_index(ps, stack_below_index);
		ft_push_b(ps);
		ft_rotate_b(ps);
		return (-1);
	}
	else
	{
		ft_go_to_index(ps, stack_above_index);
		ft_push_b(ps);
		return (1);
	}
}

void ft_improved_sort_in_b(t_push_swap *ps)
{
	int target_below_index;
	int target_above_index;
	int stack_below_index;
	int stack_above_index;
	int result;

	target_below_index = ps->size_a / 2;
	target_above_index = ps->size_a / 2 + 1;
	while (ps->size_a > 1)
	{
		stack_below_index = ft_get_stack_index(ps->a, target_below_index);
		stack_above_index = ft_get_stack_index(ps->a, target_above_index);
		result = handle_result(ps, stack_below_index, stack_above_index);
		if (result == -1)
			target_below_index--;
		else
			target_above_index++;
	}
	ft_push_back(ps);
	ft_move_to_start(ps);
}
