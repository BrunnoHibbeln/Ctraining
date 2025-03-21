/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:45:56 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/19 13:22:59 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *argv[])
{
	int	i;
	int	j;

	while (argv[1][i])
	{
		j = 0;
		if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
			j = (argv[1][i] - 'A');
		else if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
			j = (argv[1][i] - 'a');
		while (j >= 0)
		{
			write(1, &argv[1][i], 1);
			j--;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_repeat_alpha(argv);
}
