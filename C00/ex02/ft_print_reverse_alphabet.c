/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:20:54 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/18 09:23:13 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	alpha;

	alpha = 122;
	while (alpha > 96)
	{
		write(1, &alpha, 1);
		alpha--;
	}
}
/* 
int	main(void)
{
	ft_print_reverse_alphabet();
} */
