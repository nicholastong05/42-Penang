/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:23:02 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 16:26:35 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int		count_visible(int heights[4]);
void	reverse4(int src[4], int out[4]);	

void	get_col(int grid[4][4], int col_idx, int out[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		out[i] = grid[i][col_idx];
		i++;
	}
}

int	in_row(int grid[4][4], int r, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[r][i] == val)
			return (1);
		i++;
	}
	return (0);
}

int	in_col(int grid[4][4], int c, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][c] == val)
			return (1);
		i++;
	}
	return (0);
}

int	check_row(int grid[4][4], int r, int left_clue, int right_clue)
{
	int	reversed[4];

	reverse4(grid[r], reversed);
	if (count_visible(grid[r]) != left_clue)
		return (0);
	if (count_visible(reversed) != right_clue)
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int c, int top_clue, int bottom_clue)
{
	int	reversed[4];
	int	column[4];

	get_col(grid, c, column);
	reverse4(column, reversed);
	if (count_visible(column) != top_clue)
		return (0);
	if (count_visible(reversed) != bottom_clue)
		return (0);
	return (1);
}
