#include "push_swap.h"

static int get_closest_index(t_push_swap *ps, int border)
{
	t_list *stack = ps->a;
	t_content *content;
	int i = 0;
	int target_i = ps->size_a - 1;
	int current_distance = ps->size_a;

	while (stack)
	{
		content = (t_content *)stack->content;
		if (content->index < border && content->index != ps->size_a + ps->size_b - 1)
		{
			if (ft_get_index_distance(ps->size_a, i) < current_distance)
			{
				target_i = i;
				current_distance = ft_get_index_distance(ps->size_a, i);
			}
		}
		i++;
		stack = stack->next;
	}
	return (target_i);
}

static void push_to_b(t_push_swap *ps)
{
	bool push_top = ps->size_a % 2;
	if (push_top)
		ft_push_b(ps);
	else
	{
		ft_push_b(ps);
		ft_rotate_b(ps);
	}
}

void ft_k_sort(t_push_swap *ps, int chunk_size)
{
	int border = chunk_size;
	int pushed_elements_of_chunk = 0;
	int target_i;

	while (ps->size_a > 3)
	{
		target_i = get_closest_index(ps, border);
		ft_a_go_to_index(ps, target_i);
		push_to_b(ps);
		pushed_elements_of_chunk++;
		if (pushed_elements_of_chunk == chunk_size)
		{
			border += chunk_size;
			pushed_elements_of_chunk = 0;
		}
	}
	ft_3sort(ps);
	ft_improved_sort_back(ps);
}
