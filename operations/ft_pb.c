/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:07:49 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:09:31 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_node	*node;
	int		tmp;

	tmp = a->first->content;
	list_add_front(b, tmp);
	node = b->first->next;
	list_remove(b, a->first, free);
	a->first = node;
	write(1, "pb\n", 3);
}
