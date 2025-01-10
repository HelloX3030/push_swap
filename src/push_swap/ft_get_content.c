#include "push_swap.h"

t_content *ft_get_content(t_list *stack, int i)
{
	t_content *content;
	while (i--)
		stack = stack->next;
	content = (t_content *)stack->content;
	return (content);
}
