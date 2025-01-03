#include "push_swap.h"

void ft_move_to_start(t_push_swap *ps)
{
	int min_index;

	min_index = ft_get_min_stack_index(ps->a);
	ft_go_to_index(ps, min_index);
}
