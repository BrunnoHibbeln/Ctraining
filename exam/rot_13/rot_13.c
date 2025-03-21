/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:50:03 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/19 12:00:29 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot_13(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
		{
			if (argv[1][i] <= 'M')
				argv[1][i] += 13;
			else
				argv[1][i] -= 13;
		}
		else if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
		{
			if (argv[1][i] <= 'm')
				argv[1][i] += 13;
			else
				argv[1][i] -= 13;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_rot_13(argv);
}
