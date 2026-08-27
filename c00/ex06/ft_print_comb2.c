/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:49:22 by ntong             #+#    #+#             */
/*   Updated: 2026/08/05 19:22:52 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	abprint[5];

	a = 0;
	abprint[2] = ' ';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			abprint[0] = (a / 10) + '0';
			abprint[1] = (a % 10) + '0';
			abprint[3] = (b / 10) + '0';
			abprint[4] = (b % 10) + '0';
			write(1, &abprint[0], 5);
			if (a + b != 197)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
