/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:13:10 by ntong             #+#    #+#             */
/*   Updated: 2026/08/25 14:32:49 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	init_ops(char *operators, int (**functions)(int, int));
int		ft_atoi(char *str);
void	run_op(int (*func)(int, int), char op, int a, int b);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	char	operators[5];
	int		(*functions[5])(int, int);
	int		a;
	int		b;
	int		i;

	if (argc != 4)
		return (0);
	init_ops(operators, functions);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	i = -1;
	while (++i < 5)
	{
		if (argv[2][0] == operators[i] && argv[2][1] == '\0')
		{
			run_op(functions[i], operators[i], a, b);
			return (0);
		}
	}
	ft_putstr("0\n");
	return (0);
}
