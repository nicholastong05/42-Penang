/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:38:44 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 16:39:42 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"
#include <unistd.h>

void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	to_print;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			to_print = grid[i][j] + '0';
			write(1, &to_print, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
