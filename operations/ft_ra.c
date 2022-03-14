/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:09:56 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:19:24 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a)
{
	t_node	*node;
	int		tmp;

	tmp = a->first->content;
	node = a->first->next;
	list_add_last(a, tmp);
	list_remove(a, a->first, free);
	a->first = node;
	write(1, "ra\n", 3);
}
