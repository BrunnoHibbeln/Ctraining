/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:50:03 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/18 20:14:41 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv[])
{
	char *str;
	int i;
	int j;
	
	i = 1;
	j = 0;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		while (argv[i][j])
		{
			if (((argv[i][j] > 96) || (argv[i][j] > 64))
			&& ((argv[i][j] < 110) || (argv[i][j] < 78)))
				str[j] = (argv[i][j] + 13);
			if (((argv[i][j] > 108) || (argv[i][j] > 76))
			&& ((argv[i][j] < 123) || (argv[i][j] < 91)))
				str[j] = (argv[i][j] - 13);
			j++;
		}
		i++;
	}
	write(1, &str, j);
	write(1, "\n", 1);
}