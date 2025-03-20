/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:33:23 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 09:33:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *argv[])
{
	int i;

	i = 0;
	while (argv[1][i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int i;
	int end;
	int start;

	argc = 2;
	argv[1] = "FOR PONY  ";
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	end = ft_strlen(argv);
	i = end;
	while (i > 0)
	{
		if ((argv[1][i] == ' ') || (argv[1][i] == '\t'))
			i--;
		else
		{
			end = i;
			while (!(argv[1][i] == ' ') || !(argv[1][i] == '\t'))
				i--;
			start = i;
		}
	}
	while (start > end)
		write(1, &argv[1][start++], 1);
	write(1, "\n", 1);
}
