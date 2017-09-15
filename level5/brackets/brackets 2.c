/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imonagen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 09:16:12 by imonagen          #+#    #+#             */
/*   Updated: 2017/08/04 09:28:38 by imonagen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		bracketsclose(char *s, char c, int b, int i)
{
	while (b && *(++s) && i++)
		if (*s == c || *s == c + (c & 1) + 1)
			*s == c ? ++b : --b;
	return (i);
}

int		brackets(char *s, char c)
{
	if (*s == c)
		return (1);
	else if (!*s || *s == ')' || *s == '}' || *s == ']')
		return (0);
	else if (*s == '(' || *s == '{' || *s =='[')
		return (brackets(s + 1, *s + (*s & 1) + 1)
				* brackets(s + bracketsclose(s, *s, 1, 1), c));
	return (brackets(s + 1, c));
}

int		main(int ac, char **av)
{
	int i = 1;

	if (ac < 2)
		write(1, "\n", 1);
	else if (ac > 1)
	{
		while (i < ac)
		{
			if (brackets(av[i], 0))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	return (0);
}
