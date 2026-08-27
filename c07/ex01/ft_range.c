/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 12:06:50 by ntong             #+#    #+#             */
/*   Updated: 2026/08/14 13:00:43 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
