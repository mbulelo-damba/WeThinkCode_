/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:01:32 by mdamba            #+#    #+#             */
/*   Updated: 2017/08/20 16:15:28 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 1;
	if (argc <= 1)
		write(1, "\n", 1);
	else if (argc >= 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] !='\0')
			{
				if (argv[j][i + 1] == '\t' ||argv[j][i + 1] == ' ' || 
						argv[j][i + 1] == '\0')
				{
					if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
						argv[j][i] = argv[j][i] - 32;
				}
				else
				{
					if (argv[j][i] >= 'A' && argv [j][i] <= 'Z')
						argv[j][i] = argv[j][i] + 32;
				}
				i++;
			}
			ft_putstr(argv[j]);
			j++;
		}
	}
	return (0);
}
