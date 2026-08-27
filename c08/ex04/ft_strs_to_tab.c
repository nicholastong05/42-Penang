/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:15:55 by ntong             #+#    #+#             */
/*   Updated: 2026/08/16 18:48:28 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_calculate_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_copy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*k;

	k = malloc((ac + 1) * sizeof(t_stock_str));
	if (!k)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		k[i].size = ft_calculate_size(av[i]);
		k[i].str = av[i];
		k[i].copy = malloc(k[i].size + 1);
		if (!k[i].copy)
			return (NULL);
		ft_copy(k[i].copy, av[i]);
		i++;
	}
	k[i].str = 0;
	return (k);
}
