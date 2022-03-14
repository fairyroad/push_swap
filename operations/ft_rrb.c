/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:35:35 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:39:25 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *b)
{
	int		tmp;
	t_node	*node;

	tmp = b->last->content;
	list_add_front(b, tmp);
	node = b->last->prev;
	node->next = NULL;
	b->last = node;
	write(1, "rrb\n", 4);
}
