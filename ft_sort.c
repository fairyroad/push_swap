#include "push_swap.h"

static void	sort_three(t_stack *a)
{
	int		first;
	int		second;
	int		third;

	first = a->first->content;
	second = a->first->next->content;
	third = a->last->content;
	if (first > second && second < third && first < third)
		ft_sa(a);
	else if (first > second && second > third)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (first < second && second > third && first < third)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (first > second && second < third && first > third)
		ft_ra(a);
	else if (first < second && second > third && first > third)
		ft_rra(a);
}

static void	sort_fourfive(t_stack *a, t_stack *b, int pivot)
{
	int		cnt;

	cnt = 0;
	while (cnt < pivot)
	{
		if (a->first->content < pivot)
		{
			ft_pb(b);
			cnt++;
		}
		else
			ft_ra(a);
	}
	sort_three(a);
	if (pivot > 1)
	{
		if (b->first->content < b->last->content)
			ft_sb(b);
		ft_pa(a);
	}
	ft_pa(a);
}

void	sort_smallsize(t_stack *a, t_stack *b)
{
	int		first;
	int		last;

	first = a->first->content;
	last = a->last->content;
	if (a->size == 2 && first > last)
		ft_ra(a);
	else if (a->size == 3)
    {
        sort_three(a);
    }
	else if (a->size == 4)
	{
        sort_fourfive(a, b, 1);
    }
	else if (a->size == 5)
	{
        sort_fourfive(a, b, 2);
    }
}

void	sort_bigsize(t_stack *a, t_stack *b)
{
	int		size;
	int		bit;
	int		top;
	int		i;
	int		j;

	size = a->size;
	bit = 0;
	while ((size - 1) >> bit != 0)
		bit++;
	i = -1;
	while (++i < bit)
	{
		j = -1;
		while (++j < size)
		{
			top = a->first->content;
			if (((top >> i) & 1) == 1)
				ft_ra(a);
			else
				ft_pb(b);
		}
		while (b->first != NULL)
			ft_pa(a);
	}
}