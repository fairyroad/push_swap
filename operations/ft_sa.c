/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:42:26 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 19:51:34 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	int		tmp;

	tmp = a->first->content;
	a->first->content = a->first->next->content;
	a->first->next->content = tmp;
	write(1, "sa\n", 3);
}
