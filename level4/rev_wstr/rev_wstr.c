/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:23:52 by mdamba            #+#    #+#             */
/*   Updated: 2017/08/20 16:42:52 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rev_wstr(char *str, int first)
{
	int start;
	int i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!str[i])
			return;
		start = i;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
			i++;
		rev_wstr(&str[i], 0);
		write(1, &str[start], i - start);
		if (!first)
			write(1, " ", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else if (argc == 2)
	{
		rev_wstr(argv[1], 1);
		write(1, "\n", 1);
	}
	return (0);
}
