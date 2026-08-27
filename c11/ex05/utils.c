/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:43:58 by ntong             #+#    #+#             */
/*   Updated: 2026/08/25 15:44:29 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	do_add(int x, int y);
int	do_sub(int x, int y);
int	do_div(int x, int y);
int	do_mul(int x, int y);
int	do_mod(int x, int y);

int	ft_atoi(char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	print;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	print = nb % 10 + '0';
	write(1, &print, 1);
}

void	init_ops(char *operators, int (**functions)(int, int))
{
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '/';
	operators[3] = '*';
	operators[4] = '%';
	functions[0] = do_add;
	functions[1] = do_sub;
	functions[2] = do_div;
	functions[3] = do_mul;
	functions[4] = do_mod;
}

void	run_op(int (*func)(int, int), char op, int a, int b)
{
	if (b == 0 && op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	if (b == 0 && op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	ft_putnbr(func(a, b));
	ft_putstr("\n");
}
