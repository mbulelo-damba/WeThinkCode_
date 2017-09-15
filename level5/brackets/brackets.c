/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 03:32:55 by angavrel          #+#    #+#             */
/*   Updated: 2017/07/11 17:33:43 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	closebra(char *str, char c, int i, int b)
{
	while (b && *(++str) && (i++))
		if (*str == c || *str == c + c % 2 + 1)
			*str == c ? ++b : --b;
	return (i);
}

int	brackets(char *str, char c)
{
	if (*str == c)
		return (1);
	else if (!*str || *str == ')' || *str == '}' || *str == ']')
		return (0);
	else if (*str == '(' || *str == '{' || *str == '[')
		return (brackets(str + 1, *str + *str % 2 + 1)
			* brackets(str + closebra(str, *str, 1, 1), c));
	else
		return (brackets(str + 1, c));
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		write(1, "\n", 1);
	else if (argc > 1)
	{
		while (i < argc)
		{
			if (brackets(argv[i], 0))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	return (0);
}





/**int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
		while (++i < ac)
			brackets(av[i], 0) ? write(1, "OK\n", 3) : write(1, "Error\n", 6);
	else
		write(1, "\n", 1);
	return (0);
}**/
