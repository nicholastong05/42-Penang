/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:59:30 by ntong             #+#    #+#             */
/*   Updated: 2026/08/13 17:09:53 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_compare(char *first, char *second)
{
	while ((*first == *second) && *first != '\0')
	{
		first++;
		second++;
	}
	if (*first > *second)
		return (1);
	return (0);
}

void	ft_swap(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_compare(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*print;
	int		count;

	count = 1;
	ft_swap(argc, argv);
	while (count < argc)
	{
		print = argv[count];
		while (*print != '\0')
		{
			write(1, print, 1);
			print++;
		}
		write(1, "\n", 1);
		count++;
	}
}
