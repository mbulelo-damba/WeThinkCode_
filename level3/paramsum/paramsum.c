/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:57:27 by mdamba            #+#    #+#             */
/*   Updated: 2017/08/20 17:03:34 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int i;
	
	i = 0;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	i = nbr % 10 + '0';
	write(1, &i, 1);
}

int		main(int argc, char **argv)
{
	argv = 0;
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}
