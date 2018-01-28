/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:42:50 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:42:53 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		i = 0;
	int		res = 0;
	
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res)
}

void  ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int 	main(int argc, char **argv)
{
	int i;
	int ans;

	i = 1;
	if (argc != 2)
		write(1, "\n", 1);
	else if (argc == 2)
	{
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write(1, " = ", 3);
			ans = i * ft_atoi(argv[1]);
			ft_putnbr(ans);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
