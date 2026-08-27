/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:47:34 by ntong             #+#    #+#             */
/*   Updated: 2026/08/13 15:02:16 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	name = argv[0];
	while (*name != '\0')
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
	return (argc);
}
