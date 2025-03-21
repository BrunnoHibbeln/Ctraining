/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:59:10 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/19 17:14:05 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int nb;

	nb = 0;
	while (!((*str >= 48) && (*str <= 57)))
	{
		*str++;
		if (!(*str))
			return (0);
	}
	if ((*--str) == '-')
	{
		*str++;
		write(1, "-", 1);
	}
	else
	{
		*str++;
	}
	while ((*str >= 48) && (*str <= 57))
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb);
}

int	main(void)
{
	char str[] = "  aodjs";
	printf("%d",ft_atoi(str));
}
