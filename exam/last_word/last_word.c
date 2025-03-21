/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:51:27 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/19 19:25:07 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *argv[])
{
	int i;

	i = 0;
	while ((argv[1][i]))
	{
		if (((argv[1][i] != ' ') && (argv[1][i] != '\t')))
			i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int i;
	int last;
	char str[20];

	i = 0;
	argc = 2;
	argv[1] = "FOR PONY   ";
	last = ft_strlen(argv);
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while ((last > 0) && ((argv[1][last] != ' ') && (argv[1][last] != '\t')))
	{
		if ((argv[1][i] >= 'A') && (argv[1][i] >= 'Z'))
		{
			str[i] = argv[1][last];
			i++;
			last--;
		}
		else
			last--;
	}
	str[i] = '\0';
	write(1, &str, i);
}
