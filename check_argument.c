#include "push_swap.h"

int	    check_integer(char  *str)
{
	int     num;
    size_t  j;
    size_t  i;

    i = 0;
    num = 0;
    j = 0;
    while (ft_isspace(num[i]))
    {
        i++;
    }
    if (num[i] == '+' || num[i] == '-')
    {
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        j++;
        if ((num * 10 + (str[i] - '0' )) / 10 != num)
        {
            return (0);
        }
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (!str[i] && j);

}

int     check_duplicate(t_tab *tab)
{
    int i;
    int j;

    i = 0;
    while (i < tab->size)
    {
        j = i + 1;
        while (j < tab->size)
        {
            if (tab->v[i] == tab->v[j])
                return (0);
        }
        i++;
    }
    return (1);
}

int     check_sorted(t_tab *tab)
{
    int i;

    i = 0;
    while (i + 1 < tab->size)
    {
        if (tab->v[i] > tab->v[i + 1])
        {
            return (0);
        }
        i++;
    }
    return (1);
}