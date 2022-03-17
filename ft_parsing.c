/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:33:46 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 19:02:02 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_array(t_stack *a, int argc, char **argv, int start)
{
	int		i;
	int		tmp;

	i = start;
	while (i < argc)
	{
		if (!check_integer(argv[i]))
		{
			write(1, "ERROR\n", 6);
			exit(1);
		}
		tmp = ft_atoi(argv[i]);
		list_add_last(a, tmp);
		i++;
	}
}

static void	parse_string(t_stack *a, char *argv)
{
	char	**num;
	int		i;

	num = ft_split(argv, ' ');
	i = 0;
	while (num[i] != NULL)
		i++;
	parse_array(a, i, num, 0);
	i = 0;
	while (num[i] != NULL)
		free(num[i++]);
	free(num);
}

void	parse_arguments(int argc, char **argv, t_stack *a, t_stack *b)
{
	a = list_init();
	b = list_init();
	if (argc == 2 && !check_integer(argv[1]))
		parse_string(a, argv[1]);
	else
		parse_array(a, argc, argv, 1);
}
