/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:43:05 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/17 10:25:08 by rnjikho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rostring(char *s)
{
	int i = 0;
	int w_len = 0;

	while (s[i])
	{
		while (ft_space(s[i]))
			i++;
		if (s[i] && !ft_space(s[i]))
		{
			if (!w_len)
				while (s[i] && !ft_space(s[i++]))
					w_len++;
			else
			{
				while (s[i] && !ft_space(s[i]))
				{
					write(1, &s[i++], 1);
				}
					write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_space(s[i]))
		i++;
	while (w_len--)
		write(1, &s[i++], 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1 && *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
