#include "push_swap.h"

// static int ft_get_closest_index(t_push_swap *ps, t_list *stack, int *border, int chunk_size)
// {
// 	t_content *content;
// 	int i = 0;
// 	int target_i;
// 	int min_distance = ps->size_a + ps->size_b;
// 	int distance = ps->size_a + ps->size_b;

// 	while (stack)
// 	{
// 		content = (t_content *)stack->content;
// 		if (content->index == ps->size_a + ps->size_b - 1)
// 			continue;
// 		if (content->index > *border + chunk_size)
// 			continue;
// 		distance = ft_get_index_distance(ps->size_a, i);
// 		if (distance < min_distance)
// 		{
// 			min_distance = distance;
// 			target_i = i;
// 		}
// 		i++;
// 		stack = stack->next;
// 	}
// 	return (target_i);
// }

static void push_to_b(t_push_swap *ps, int *top_size, int *bottom_size)
{
	if (*top_size >= *bottom_size)
	{
		ft_push_b(ps);
		(*bottom_size)++;
	}
	else
	{
		ft_push_b(ps);
		ft_rotate_b(ps);
		(*top_size)++;
	}
}

void ft_k_sort(t_push_swap *ps, int chunk_size)
{
	t_content *content;
	int border = chunk_size;
	int pushed_elements_of_chunk = 0;
	int top_size = 0;
	int bottom_size = 0;

	while (ps->size_a > 3)
	{
		content = (t_content *)ps->a->content;
		if (content->index == ps->size_a + ps->size_b - 1)
			ft_rotate_a(ps);
		else if (content->index > border)
			ft_rotate_a(ps);
		else
		{
			push_to_b(ps, &top_size, &bottom_size);
			pushed_elements_of_chunk++;
			if (pushed_elements_of_chunk >= chunk_size)
			{
				border += chunk_size;
				pushed_elements_of_chunk = 0;
			}
		}
	}
	ft_3sort(ps);
	ft_improved_sort_back(ps);
}
