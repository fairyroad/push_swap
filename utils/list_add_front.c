/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:48:29 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:58:20 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_add_front(t_stack *a, int val)
{
	t_node	*node;

	node->content = val;
	node->next = a->first;
	node->prev = NULL;
	if (a->first != NULL)
	{
		a->first->prev = node;
	}
	else
	{
		a->last = node;
	}
	a->first = node;
	a->size++;
}
