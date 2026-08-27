/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:19:13 by ntong             #+#    #+#             */
/*   Updated: 2026/08/26 19:21:45 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	to_print(char print)
{
	write(1, &print, 1);
}

void	print_hex_byte(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	to_print(hex[c / 16]);
	to_print(hex[c % 16]);
}

void	print_addr(unsigned long n)
{
	char	*hex;
	char	buffer[16];
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buffer[i] = hex[n % 16];
		n = n / 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		to_print(buffer[i]);
		i++;
	}
}

void	print_line(unsigned char *p, unsigned int i, unsigned int size)
{
	unsigned int	j;

	print_addr((unsigned long)(p + i));
	to_print(':');
	to_print(' ');
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			print_hex_byte(p[i + j]);
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			to_print(' ');
		j++;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		if (p[i + j] >= 32 && p[i + j] < 127)
			to_print(p[i + j]);
		else
			to_print('.');
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*p;
	unsigned int	i;

	if (size == 0)
		return (addr);
	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_line(p, i, size);
		to_print('\n');
		i += 16;
	}
	return (addr);
}
