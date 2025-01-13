#include "push_swap.h"

static void move_to_b(t_push_swap *ps, int chunk_size)
{
	t_content *content;
	int i = 0;

	while (i < chunk_size)
	{
		content = (t_content *)ps->a->content;
		if (content->index < chunk_size)
			ft_push_b(ps);
		else
			ft_rotate_a(ps);
		i++;
	}
}

void ft_k_sort(t_push_swap *ps, int chunk_size)
{
	move_to_b(ps, chunk_size);
	ft_improved_sort_back(ps);
}
