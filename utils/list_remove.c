#include "../push_swap.h"

void	list_remove(t_stack *a, t_node *node, void (*del)(void*))
{
	if (node != NULL)
    {
        del(node->content);
        free(node);
        a->size--;
    }
}
