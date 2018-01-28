/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:39:11 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:39:14 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

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

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += (n < 10) ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
