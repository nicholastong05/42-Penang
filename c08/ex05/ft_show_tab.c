/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:51:58 by ntong             #+#    #+#             */
/*   Updated: 2026/08/16 19:03:57 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_string(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_print_num(int num)
{
	char	print;

	if (num >= 10)
		ft_print_num(num / 10);
	print = (num % 10) + '0';
	write(1, &print, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_print_string(par->str);
		ft_print_num(par->size);
		write(1, "\n", 1);
		ft_print_string(par->copy);
		par++;
	}
}
