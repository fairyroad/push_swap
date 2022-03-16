/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:58:40 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 20:57:28 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_add_last(t_stack *a, int content)
{
	t_node	*tmp;
	t_node	*node;

	node = list_create_node(content);
	tmp = a->first;
	if (tmp == NULL)
	{
		a->first = node;
		a->last = node;
	}
	else
	{
		a->last->next = node;
		a->last = node;
		node->prev = a->last;
	}
	a->size++;
}
