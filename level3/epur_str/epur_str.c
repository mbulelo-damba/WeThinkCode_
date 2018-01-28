/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:21:57 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:22:00 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if(ac == 2)
	{
		while(*av[1] != '\0')
		{
			if(*av[1] == ' ' || *av[1] == '\t')
				i = 0;
			else
			{
				if(i == 0 && j == 1)
					write(1, " ", 1);
				i = 1;
				j = 1;
				write(1, av[1], 1);
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
