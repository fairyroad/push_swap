/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:13:29 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 19:04:26 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*list_create_node(int content)
{
	t_node	*node;

	node = (t_node *) malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
