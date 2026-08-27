/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:25:22 by ntong             #+#    #+#             */
/*   Updated: 2026/08/27 14:17:08 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	issep(char word, char *charset)
{
	while (*charset != '\0')
	{
		if (word == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	wordcount;
	int	presep;

	wordcount = 0;
	presep = 1;
	while (*str != '\0')
	{
		if (presep && !(issep(*str, charset)))
			wordcount++;
		presep = issep(*str, charset);
		str++;
	}
	return (wordcount);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !issep(str[i], charset))
		i++;
	return (i);
}

char	*ft_copy_word(char *str, int len)
{
	char	*des;
	int	i;

	i = 0;
	des = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		des[i] = str[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

char	**ft_split(char *str, char *charset)
{
	int	wordcount;
	char	**array;
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	wordcount = ft_count_word(str, charset);
	array = malloc(sizeof(char *) * (wordcount + 1));
	while (str[i] != '\0')
	{
		while (issep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break;
		len = ft_word_len(str + i, charset);
		array[j++] = ft_copy_word(str + i,len);
		i += len;
	}
	array[j] = NULL;
	return (array);
}
