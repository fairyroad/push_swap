/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:37:33 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 21:58:40 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int	argc, char	**argv)
{
	t_stack	*a;
	t_stack	*b;
	t_tab	copy;

	parse_arguments(argc, argv, a, b);
	copy = convert_to_tab(a);
	if (check_duplicate(&copy))
	{
		if (!check_sorted(&copy))
		{
			format_stack(a);
			if (a->size > 5)
				sort_bigsize(a, b);
			else
				sort_smallsize(a, b);
		}
	}
	else
		write(1, "ERROR\n", 6);
	free(copy.v);
	list_clear(a, free);
	list_clear(b, free);
	return (0);
}
