/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:17:21 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 21:18:43 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_remove(t_stack *a, t_node *node, void (*del)(void*))
{
	if (node != NULL)
	{
		del(node->content);
		free(node);
		a->size--;
	}
}
