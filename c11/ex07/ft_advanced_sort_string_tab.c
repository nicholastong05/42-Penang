/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:24:07 by elim-hon          #+#    #+#             */
/*   Updated: 2026/08/26 17:03:21 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		not_sorted;
	int		length;
	char	*temp;

	not_sorted = 1;
	length = ft_tablen(tab);
	while (not_sorted)
	{
		not_sorted = 0;
		i = 0;
		while (i < length - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				not_sorted = 1;
			}
			i++;
		}
	}
}
