#include "push_swap.h"

bool ft_value_is_smallest(int value, int compare1, int compare2, int compare3)
{
	if (value < compare1 && value < compare2 && value < compare3)
		return (true);
	return (false);
}

int ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
