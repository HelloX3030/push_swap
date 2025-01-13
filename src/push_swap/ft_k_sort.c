#include "push_swap.h"

// static void push_to_b(t_push_swap *ps)
// {
// 	bool push_top = ps->size_a % 2;
// 	if (push_top)
// 		ft_push_b(ps);
// 	else
// 	{
// 		ft_push_b(ps);
// 		ft_rotate_b(ps);
// 	}
// }

void ft_k_sort(t_push_swap *ps, int chunk_size)
{
	int border = 0;
	t_content *content;

	while (ps->size_a > 3)
	{
		content = (t_content *)ps->a->content;
		if (content->index <= border)
		{
			ft_push_b(ps);
			ft_rotate_b(ps);
			border++;
		}
		else if (content->index <= border + chunk_size)
		{
			ft_push_b(ps);
			border++;
		}
		else
			ft_rotate_a(ps);
	}
	ft_3sort(ps);
	ft_improved_sort_back(ps);
}
