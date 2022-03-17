/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:59:35 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 17:27:03 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void	ft_sb(t_stack *b)
{
	int		tmp;

	tmp = b->first->content;
	b->first->content = b->first->next->content;
	b->first->next->content = tmp;
	write(1, "sb\n", 3);
}
