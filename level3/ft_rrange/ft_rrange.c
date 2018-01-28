/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:24:21 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:24:23 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *range;
	int i;
	int check;

	i = 0;
	if (start > end)
		range = (int*)malloc(sizeof(int) * ((start - end) + 1));
	else
		range = (int*)malloc(sizeof(int) * ((end - start) + 1));
	while (start > end || start < end)
	{
		range[i] = end;
		i++;
		check = (end > start) ? -1 : 1;
		end = end + check;
	}
	range[i] = end;
	return (range);
}

