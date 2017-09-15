/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 13:04:26 by mdamba            #+#    #+#             */
/*   Updated: 2017/08/28 13:23:54 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void 		fprime(int nbr, int a, int i)
{
	a++;
	while(nbr % i !='\0' && i <= nbr)
		++i;
	if (nbr % i == 0)
	{
		if (a != 1)
			printf("*");
		printf("%d", i);
		if (i != nbr)
			fprime(nbr / i, a, i);
	}
	else
		printf("%d", nbr);
}

int main (int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]), 0, 2);
	printf("\n");
	return (0);
}
