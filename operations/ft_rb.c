/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:18:46 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:23:28 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack *b)
{
	t_node	*node;
	int		tmp;

	tmp = b->first->content;
	node = b->first->next;
	list_add_last(b, tmp);
	list_remove(b, b->first, free);
	b->first = node;
	write(1, "rb\n", 3);
}
