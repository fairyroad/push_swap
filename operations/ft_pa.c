/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:51:57 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 17:57:40 by ygil             ###   ########.fr       */
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
