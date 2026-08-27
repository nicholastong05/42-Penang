/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:40:59 by ntong             #+#    #+#             */
/*   Updated: 2026/08/10 12:47:11 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	dec_to_hex(int print)
{
	if (print == 10)
		return ('a');
	else if (print == 11)
		return ('b');
	else if (print == 12)
		return ('c');
	else if (print == 13)
		return ('d');
	else if (print == 14)
		return ('e');
	else if (print == 15)
		return ('f');
	else
		return (print + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int		hexa;
	char	print;

	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			hexa = (unsigned char)*str;
			print = hexa / 16;
			print = dec_to_hex(print);
			write(1, &print, 1);
			hexa = hexa % 16;
			print = dec_to_hex(hexa);
			write(1, &print, 1);
		}
		str++;
	}
}
