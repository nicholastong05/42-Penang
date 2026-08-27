/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:41:04 by ntong             #+#    #+#             */
/*   Updated: 2026/08/13 18:26:41 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*print;

	argc--;
	while (argc != 0)
	{
		print = argv[argc];
		while (*print != '\0')
		{
			write(1, print, 1);
			print++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
