/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 17:13:56 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/11 17:14:26 by rnjikho          ###   ########.fr       */
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

