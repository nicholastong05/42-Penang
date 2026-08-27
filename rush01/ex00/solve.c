/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:30:46 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 16:31:54 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	in_row(int grid[4][4], int r, int val);
int	in_col(int grid[4][4], int c, int val);
int	check_row(int grid[4][4], int r, int left_clue, int right_clue);
int	check_col(int grid[4][4], int c, int top_clue, int bottom_clue);

int	is_valid_placement(t_puzzle *p, int r, int c)
{
	int	result1;
	int	result2;

	result1 = 1;
	result2 = 1;
	if (c == 3)
		result1 = check_row(p->grid, r, p->left[r], p->right[r]);
	if (r == 3)
		result2 = check_col(p->grid, c, p->top[c], p->bottom[c]);
	return (result1 && result2);
}

void	get_next_cell(int r, int c, int *next_r, int *next_c)
{
	if (c == 3)
	{
		*next_r = r + 1;
		*next_c = 0;
	}
	else
	{
		*next_r = r;
		*next_c = c + 1;
	}
}

int	solve(t_puzzle *p, int r, int c)
{
	int	val;
	int	next_r;
	int	next_c;

	if (r == 4)
		return (1);
	get_next_cell(r, c, &next_r, &next_c);
	val = 1;
	while (val <= 4)
	{
		if (!in_row(p->grid, r, val) && !in_col(p->grid, c, val))
		{
			p->grid[r][c] = val;
			if (is_valid_placement(p, r, c))
			{
				if (solve(p, next_r, next_c))
					return (1);
			}
			p->grid[r][c] = 0;
		}
		val++;
	}
	return (0);
}
