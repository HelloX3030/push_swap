#include "push_swap.h"

void ft_stalin_sort(t_push_swap *ps)
{
	int i = 0;
	int start_size = ps->size_a;
	int prev_value = INT_MIN;
	t_content *content;

	while (i < start_size)
	{
		content = (t_content *)ps->a->content;
		if (content->value < prev_value)
			ft_push_b(ps);
		else
		{
			prev_value = content->value;
			ft_rotate_a(ps);
		}
		i++;
	}
}
