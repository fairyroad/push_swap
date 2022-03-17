/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:55:09 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 19:24:22 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	format_stack(t_stack	*a)
{
	t_node	*tmp;
	t_tab	copy;
	int		index;
	int		*val;
	int		*con;

	copy = convert_to_tab(a);
	sort_tab(&copy);
	tmp = a->first;
	while (tmp != NULL)
	{
		index = find_index(&copy, tmp->content);
		val = malloc(sizeof(int));
		con = malloc(sizeof(int));
		*val = index;
		*con = tmp->content;
		free(con);
		tmp->content = *val;
		tmp = tmp->next;
		free(val);
	}
	free(copy.v);
}
