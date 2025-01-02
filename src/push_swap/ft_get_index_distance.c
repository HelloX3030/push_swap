#include "push_swap.h"

int ft_get_index_distance(int size, int index)
{
	int reversed_distance = size - index;
	if (index < reversed_distance)
		return (index);
	else
		return (reversed_distance);
}
