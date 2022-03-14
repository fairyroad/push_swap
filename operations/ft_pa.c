/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:51:57 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:15:55 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*node;
	int		tmp;

	tmp = b->first->content;
	list_add_front(a, tmp);
	node = b->first->next;
	list_remove(a, b->first, free);
	b->first = node;
	write(1, "pa\n", 3);
}
