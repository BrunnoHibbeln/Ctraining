/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:13:39 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/18 09:23:20 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 97;
	while (alpha < 123)
	{
		write(1, &alpha, 1);
		alpha++;
	}
}
/* 
int	main(void)
{
	ft_print_alphabet();
} */
