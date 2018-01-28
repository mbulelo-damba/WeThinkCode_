/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:21:23 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:21:27 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int	res = 0;;
	int	i = 0;

	if (str[0] == '+')
		i = 1;
	while (str[i]) 
		res = res * 10 + str[i++] - '0';
	return (res);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_is_prim(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prim_sum(int nbr)
{
	int i;
	int count;

	i = 2;
	count = 0;
	while (i <= nbr)
	{
		if (ft_is_prim(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

int		main(int argc, char **argv)
{
	char zero;
	char rtn;

	zero = '0';
	rtn = '\n';
	if (argc == 2)
		ft_add_prim_sum(ft_atoi(argv[1]));
	else
		write(1, &zero, 1);
	write(1, &rtn, 1);
	return (0);
}
