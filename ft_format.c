#include "push_swap.h"

void	format_stack(t_stack	*a)
{
	t_node	*tmp;
	t_tab	copy;
	int		index;
	int		*val;

	copy = convert_to_tab(a);
	sort_tab(&copy);
	tmp = a->first;
	while (tmp != NULL)
	{
		index = find_index_in_tab(&copy, tmp->content);
		val = malloc(sizeof(int));
		*val = index;
		free(tmp->content);
		tmp->content = val;
		tmp = tmp->next;
	}
	free(copy.v);
}
