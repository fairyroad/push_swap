/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:05:29 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 18:38:03 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first > third)
		rra(a);
}

static void	sort_fourfive(t_stack	*a, t_stack	*b, int	pivot)
{
	int		cnt;

	cnt = 0;
	while (cnt < pivot)
	{
		if (a->first->content < pivot)
		{
			pb(a, b);
			cnt++;
		}
		else
			ra(a);
	}
	sort_three(a);
	if (pivot > 1)
	{
		if (b->first->content < b->last->content)
			sb(b);
		pa(a, b);
	}
	pa(a, b);
}

void	sort_smallsize(t_stack	*a, t_stack	*b)
{
	int		first;
	int		last;

	first = a->first->content;
	last = a->last->content;
	if (a->size == 2 && first > last)
		ra(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 4)
		sort_fourfive(a, b, 1);
	else if (a->size == 5)
		sort_fourfive(a, b, 2);
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
				ra(a);
			else
				pb(a, b);
		}
		while (b->first != NULL)
			pa(a, b);
	}
}
