/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:18:34 by ntong             #+#    #+#             */
/*   Updated: 2026/08/20 17:10:51 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	direction;

	i = 0;
	direction = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			if (direction == -1)
				return (0);
			direction = 1;
		}
		else if (f(tab[i], tab[i + 1]) < 0)
		{
			if (direction == 1)
				return (0);
			direction = -1;
		}
		i++;
	}
	return (1);
}
