#include "push_swap.h"

void ft_push_back(t_push_swap *ps)
{
	while (ps->size_b > 0)
		ft_push_a(ps);
}
