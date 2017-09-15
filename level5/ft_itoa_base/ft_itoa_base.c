/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 17:11:33 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/17 17:11:39 by rnjikho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ABS(v) ((v) < 0 ? -(v) : (v))

void	aux(int n, int b, char *ans, int *p)
{
	char	base[] = "0123456789ABCDEF";

	if (n <= -b || b <= n)
		aux(n / b, b, ans, p);
	ans[(*p)++] = base[ABS(n % b)];
}

char	*ft_itoa_base(int value, int base)
{
	char	*ans;
	int		p;

	if (base < 2 || 16 < base
			|| !(ans = (char *)malloc(sizeof(char) * 35)))
		return (NULL);
	p = 0;
	if (base == 10 && value < 0)
		ans[p++] = '-';
	aux(value, base, ans, &p);
	ans[p] = '\0';
	return (ans);
}
