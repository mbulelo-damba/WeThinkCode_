/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 12:52:15 by mdamba            #+#    #+#             */
/*   Updated: 2017/08/21 12:58:19 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	c;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	return(a * b / pgcd(a, b));
}
