#include "../push_swap.h"

t_stack	*list_init(void)
{
	t_stack	*tmp;

	tmp = (t_stack *) malloc(sizeof(t_stack));
	if (tmp == NULL)
		return (NULL);
	tmp->first = NULL;
	tmp->last = NULL;
	tmp->size = 0;
	return (tmp);
}
