#include "push_swap.h"

static void	parse_array(t_stack *a, int argc, char **argv, int start)
{
	int     i;
	int		*tmp;

	i = start;
	while (i < argc)
	{
		if (!check_int(argv[i]))
		{
			write(0, "ERROR\n", 6);
			exit(1);
		}
		tmp = malloc(sizeof(int));
		*tmp = ft_atoi(argv[i]);
		list_add_back(a, tmp);
		i++;
	}
}

static void	parse_string(t_stack *a, char *argv)
{
	char	**num;
	int 	i;

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

t_stack	parse_arguments(int argc, char **argv)
{
	t_stack	tmp;

	if (argc == 2 && !check_int(argv[1]))
		parse_string(&tmp, argv[1]);
	else
		parse_array(&tmp, argc, argv, 1);
	return (tmp);
}
