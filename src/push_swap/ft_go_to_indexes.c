#include "push_swap.h"

static void run_r(t_push_swap *ps, int a_index, int b_index)
{
	ft_printf("run_r\n");
	int rotate_both = ft_min(a_index, b_index);
	a_index -= rotate_both;
	b_index -= rotate_both;

	while (rotate_both > 0)
	{
		ft_rotate_rr(ps);
		rotate_both--;
	}
	while (a_index > 0)
	{
		ft_rotate_a(ps);
		a_index--;
	}
	while (b_index > 0)
	{
		ft_rotate_b(ps);
		b_index--;
	}
}

static void run_r_rr(t_push_swap *ps, int a_index, int b_index)
{
	ft_printf("run_r_rr\n");
	int b_rotations = ps->size_b - b_index;
	while (a_index)
	{
		ft_rotate_a(ps);
		a_index--;
	}
	while (b_rotations)
	{
		ft_reverse_rotate_b(ps);
		b_rotations--;
	}
}

static void run_rr_r(t_push_swap *ps, int a_index, int b_index)
{
	ft_printf("run_rr_r\n");
	int a_rotations = ps->size_a - a_index;
	while (a_rotations)
	{
		ft_reverse_rotate_a(ps);
		a_rotations--;
	}
	while (b_index)
	{
		ft_rotate_b(ps);
		b_index--;
	}
}

static void run_rr(t_push_swap *ps, int a_index, int b_index)
{
	ft_printf("run_rr\n");
	int rotate_both = ft_min(ps->size_a - a_index, ps->size_b - b_index);
	int rotate_a = ps->size_a - a_index - rotate_both;
	int rotate_b = ps->size_b - b_index - rotate_both;

	ft_printf("------\n");
	ft_printf("a_size: %d\n", ps->size_a);
	ft_printf("b_size: %d\n", ps->size_b);
	ft_printf("a_index: %d\n", a_index);
	ft_printf("b_index: %d\n", b_index);
	ft_printf("rotate_both: %d\n", rotate_both);
	ft_printf("rotate_a: %d\n", rotate_a);
	ft_printf("rotate_b: %d\n", rotate_b);
	while (rotate_both > 0)
	{
		ft_reverse_rotate_rr(ps);
		rotate_both--;
	}
	while (rotate_a > 0)
	{
		ft_reverse_rotate_a(ps);
		rotate_a--;
	}
	while (rotate_b > 0)
	{
		ft_reverse_rotate_b(ps);
		rotate_b--;
	}
}

void ft_go_to_indexes(t_push_swap *ps, int a_index, int b_index)
{
	int r_operations = ft_max(a_index, b_index);
	int r_rr_operations = a_index + ps->size_b - b_index;
	int rr_r_operations = ps->size_a - a_index + b_index;
	int rr_operations = ft_max(ps->size_a - a_index, ps->size_b - b_index);

	if (a_index <= 0)
		ft_b_go_to_index(ps, b_index);
	else if (b_index <= 0)
		ft_a_go_to_index(ps, a_index);
	else if (ft_value_is_smallest(r_operations, r_rr_operations, rr_r_operations, rr_operations))
		run_r(ps, a_index, b_index);
	else if (ft_value_is_smallest(r_rr_operations, r_operations, rr_r_operations, rr_operations))
		run_r_rr(ps, a_index, b_index);
	else if (ft_value_is_smallest(rr_r_operations, r_operations, r_rr_operations, rr_operations))
		run_rr_r(ps, a_index, b_index);
	else
		run_rr(ps, a_index, b_index);
}
