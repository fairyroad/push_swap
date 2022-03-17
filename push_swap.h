/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:23:23 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 17:36:36 by ygil             ###   ########.fr       */
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
int		check_integer(char	*str);
int		check_duplicate(t_tab	*tab);
int		check_sorted(t_tab	*tab);
void	format_stack(t_stack	*a);
void	sort_smallsize(t_stack	*a, t_stack	*b);
void	sort_bigsize(t_stack *a, t_stack *b);
int		find_index(t_tab *tab, int val);
void	sort_tab(t_tab *tab);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);
char	**ft_split(char const *str, char c);
void	list_add_front(t_stack *a, int val);
void	list_add_last(t_stack *a, int content);
void	list_remove(t_stack *a, t_node *node, void (*del)(void*));
void	list_clear(t_stack *a, void (*del)(void*));
t_node	*list_create_node(void *content);
t_stack	*list_init(void);

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	ft_sb(t_stack *b);
void	ft_ss(t_stack *a, t_stack *b);

#endif
