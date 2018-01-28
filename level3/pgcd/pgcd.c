/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:38:17 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:38:20 by mdamba           ###   ########.fr       */
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
