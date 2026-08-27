/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:05:41 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 16:09:35 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"
#include <unistd.h>

void	ft_assign_clues(int *clues, char *str, int *count, int *valid);
int		ft_validate(int *clues);
void	split_clues(int clues[16], t_puzzle *p);
void	init_grid(int grid[4][4]);
int		solve(t_puzzle *p, int r, int c);
void	print_grid(int grid[4][4]);

void	init_grid(int grid[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			grid[r][c] = 0;
			c++;
		}
		r++;
	}
}

int	main(int argc, char **argv)
{
	t_puzzle	puz;
	int			clues[16];
	int			count;
	int			valid;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_assign_clues(clues, argv[1], &count, &valid);
	if (!valid || count != 16 || !ft_validate(clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	split_clues(clues, &puz);
	init_grid(puz.grid);
	if (solve(&puz, 0, 0))
		print_grid(puz.grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
