/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:23:35 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:26:24 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack *a, t_stack *b)
{
	t_node	*node_a;
	t_node	*node_b;
	int		tmp_a;
	int		tmp_b;

	tmp_a = a->first->content;
	tmp_b = b->first->content;
	node_a = a->first->next;
	node_b = b->first->next;
	list_add_last(a, tmp_a);
	list_add_last(b, tmp_b);
	list_remove(a, a->first, free);
	list_remove(b, b->first, free);
	a->first = node_a;
	b->first = node_b;
	write(1, "rr\n", 3);
}
