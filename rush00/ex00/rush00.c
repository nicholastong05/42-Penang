/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 14:38:37 by ntong             #+#    #+#             */
/*   Updated: 2026/08/08 14:54:18 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char print);

void	rush(int x, int y)
{
	int	countx;
	int	county;

	countx = x;
	county = y;
	if (x == 0 || y == 0)
		return ;
	while (y != 0)
	{
		while (x != 0)
		{
			if ((y == 1 || y == county) && (x == 1 || x == countx))
				ft_putchar('o');
			else if ((x == 1 || x == countx) && (y != 1 && y != county))
				ft_putchar('|');
			else if ((x != 1 || x != countx) && (y == 1 || y == county))
				ft_putchar('-');
			else
				ft_putchar(' ');
			x--;
		}
		x = countx;
		ft_putchar('\n');
		y--;
	}
}
