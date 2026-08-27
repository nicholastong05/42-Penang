/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:10:13 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 16:11:23 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"
#include <unistd.h>

void	ft_assign_clues(int *clues, char *str, int *count, int *valid)
{
	int	i;

	i = 0;
	*valid = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			if (i < 16)
				clues[i] = *str - '0';
			i++;
			str++;
			if (*str >= '0' && *str <= '9')
				*valid = 0;
		}
		else
			str++;
	}
	*count = i;
}

int	ft_validate(int *clues)
{
	int	count;

	count = 0;
	while (count <= 15)
	{
		if (clues[count] < 1 || clues[count] > 4)
			return (0);
		count++;
	}
	return (1);
}

void	split_clues(int clues[16], t_puzzle *p)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		p->top[i] = clues[i];
		p->bottom[i] = clues[i + 4];
		p->left[i] = clues[i + 8];
		p->right[i] = clues[i + 12];
		i++;
	}
}
