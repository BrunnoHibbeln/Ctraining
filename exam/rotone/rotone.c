/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:07:09 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/19 15:12:47 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *argv[])
{
	int i;

	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
		{
			if (argv[1][i] == 'Z')
				argv[1][i] -= 25;
			else
				argv[1][i] += 1;
		}
		else if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
		{
			if (argv[1][i] == 'z')
				argv[1][i] -= 25;
			else
				argv[1][i] += 1;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "\n", 1);
	else
		ft_rotone(argv);
}
