/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:23:23 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 21:57:33 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	int				content;
}	t_node;

typedef struct s_stack
{
	struct s_node	*first;
	struct s_node	*last;
	int				size;
}	t_stack;

typedef struct s_tab
{
	int		*v;
	int		size;
}	t_tab;

t_tab	convert_to_tab(t_stack	*a);
void	list_add_front(t_stack *a, int val);
void	list_remove(t_stack *a, t_node *node, void (*del)(void*));

#endif
