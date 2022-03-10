/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:39:31 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:43:26 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	int		tmp_a;
	int		tmp_b;
	t_node	*node_a;
	t_node	*node_b;

	tmp_a = a->last->content;
	tmp_b = b->last->content;
	list_add_front(a, tmp_a);
	list_add_front(b, tmp_b);
	node_a = a->last->prev;
	node_b = b->last->prev;
	node_a->next = NULL;
	node_b->next = NULL;
	a->last = node_a;
	b->last = node_b;
	write(0, "rrr\n", 4);
}
