/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:46:16 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 19:48:29 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_stack *a, t_stack *b)
{
	int		tmp_a;
	int		tmp_b;

	tmp_a = a->first->content;
	tmp_b = b->first->content;
	a->first->content = a->first->next->content;
	b->first->content = b->first->next->content;
	a->first->next->content = tmp_a;
	b->first->next->content = tmp_b;
	write(0, "ss\n", 3);
}
