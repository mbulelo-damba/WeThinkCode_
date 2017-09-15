/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:14:05 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/12 12:14:20 by rnjikho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int  ft_pgcd(unsigned int n, unsigned int n2)
{
	unsigned int i;

	while (n2 != 0)
	{
		i = n % n2;
		n = n2;
		n2 = i;
	}
	return (n);
}




int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
