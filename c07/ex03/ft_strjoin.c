/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 13:24:22 by ntong             #+#    #+#             */
/*   Updated: 2026/08/14 17:39:08 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
int	count_total_memory(int size, char **strs, char *sep);
char	*move(char *value, char **strs, char *sep, int size);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main()
{	
	char *strs[3];
	strs[0] ="JunFei";
	strs[1] = "GAY";
	strs[2] = "YAG";
	char *sep = "is";
	printf("%s",ft_strjoin(3,strs,sep));}
*/
#include <stdlib.h>

int	count_total_memory(int size, char **strs, char *sep)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	while (i != size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	j = 0;
	while (sep[j] != '\0')
		j++;
	return (count + (j * (size - 1)));
}

char	*move(char *value, char **strs, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			*value = strs[i][j];
			j++;
			value++;
		}
		j = 0;
		while (sep[j] != '\0')
		{
			*value = sep[j];
			j++;
			value++;
		}
		i++;
	}
	return (value);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*value;
	int		i;
	char	*toreturn;

	if (size <= 0)
	{
		value = malloc(1);
		value[0] = '\0';
		return (value);
	}
	i = count_total_memory(size, strs, sep);
	value = malloc(i + 1);
	toreturn = value;
	i = 0;
	value = move(value, strs, sep, size);
	while (strs[size - 1][i])
	{
		*value = strs[size - 1][i];
		i++;
		value++;
	}
	*value = '\0';
	return (toreturn);
}
