#include "../push_swap.h"

static long long	word_num(char const *str, char c)
{
	long long	num;

	num = 0;
	while (*str)
	{
		if (*str != c)
		{
			num++;
			while (*str && *str != c)
				str++;
		}
		if (*str)
			str++;
	}
	return (num);
}

char	**ft_split(char const *str, char c)
{
	char		**ret;
	long long	i;
	char		*start;

	ret = (char **)malloc(sizeof(char *) * (word_num(str, c) + 1));
	if (!ret || !str)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			start = (char *)str;
			while (*str && *str != c)
				str++;
			ret[i] = (char *)malloc(str - start + 1);
			if (!ret[i])
				return (0);
			ft_strlcpy(ret[i++], start, str - start + 1);
		}
		if (*str)
			str++;
	}
	ret[i] = 0;
	return (ret);
}