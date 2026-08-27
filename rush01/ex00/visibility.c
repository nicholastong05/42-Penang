/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:18:18 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 16:19:33 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	count_visible(int heights[4])
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (heights[i] > max)
		{
			max = heights[i];
			count++;
		}
		i++;
	}
	return (count);
}

void	reverse4(int src[4], int out[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		out[i] = src[3 - i];
		i++;
	}
}
