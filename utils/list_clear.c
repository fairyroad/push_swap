#include "../push_swap.h"

void	list_clear(t_stack *a, void (*del)(void*))
{
	t_node	*node;
	t_node	*tmp;

	if (a != NULL && del != NULL)
	{
		node = a->first;
		while (node != NULL)
		{
			tmp = node->next;
			list_remove(a, node, del);
			node = tmp;
		}
		free(a);
	}
}