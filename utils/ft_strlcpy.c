/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:29:58 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 17:32:41 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char	*dest, const char *src, size_t size)
{
	size_t	res;

	res = 0;
	if (size > 0)
	{
		while (size > 1 && src[res])
		{
			dest[res] = src[res];
			res++;
			size--;
		}
		dest[res] = 0;
	}
	while (src[res] != 0)
		res++;
	return (res);
}
