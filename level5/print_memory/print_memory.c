/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:56:47 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:56:57 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_hex(int num, int count)
{
	static	char	*str = "0123456789abcdef";

	if (count > 1)
		ft_hex(num >> 4, count - 1);
	write(1, &str[num % 16], 1);
}

void	ft_print(unsigned char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_mem(unsigned char *str, int i, size_t size)
{
	size_t		j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		ft_print(str[i + j]);
		j++;
	}
}

void	print_memory(const void *addr, size_t size)
{
	size_t		i;
	size_t		j;
	unsigned	char	*str;

	i = 0;
	str = (unsigned char *)addr;
	while (i < size)
	{
		j = 0;
		while (j < 16)
		{
			if (j < 16 && i + j < size)
				ft_hex((int)str[i + j], 2);
			if (j % 2)
				write(1, " ", 1);
			if (i + j >= size)
				write(1, "  ", 2);
			j++;
		}
		ft_mem(str, i, size);
		write(1, "\n", 1);
		i += 16;
	}
}
