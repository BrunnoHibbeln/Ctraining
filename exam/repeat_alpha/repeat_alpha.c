/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:45:56 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/18 19:11:37 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv[])
{
	int i;
	int j;
	int alphA;
	int alpha;

	i = 0;
	j = 1;
	if (argc < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argc)
	{
		if(argv[1][i] == i)
			return
	}
}
