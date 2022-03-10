/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:28:42 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:39:19 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a)
{
	int		tmp;
	t_node	*node;

	tmp = a->last->content;
	list_add_front(a, tmp);
	node = a->last->prev;
	node->next = NULL;
	a->last = node;
	write(0, "rra\n", 4);
}
