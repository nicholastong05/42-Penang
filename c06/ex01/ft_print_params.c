/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:29:23 by ntong             #+#    #+#             */
/*   Updated: 2026/08/13 15:34:07 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*print;

	i = 1;
	while (i < argc)
	{
		print = argv[i];
		while (*print != '\0')
		{
			write(1, print, 1);
			print++;
		}
		write(1, "\n", 1);
		i++;
	}
}
