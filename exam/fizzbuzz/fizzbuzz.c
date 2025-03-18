/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:35:30 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/18 19:41:06 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(int nb)
{
	char str;
	
	if (nb > 9)
		ft_convert(nb / 10);
	str = (nb % 10) + '0';
	write(1, &str, 1);
}

int	main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if ((i % 3) == 0)
			write(1, "fizz", 4);
		if ((i % 5) == 0)
			write(1, "buzz", 4);
		if (((i % 3) != 0) && ((i % 5) != 0))
			ft_convert(i);
		i++;
		write(1, "\n", 1);
	}
}
