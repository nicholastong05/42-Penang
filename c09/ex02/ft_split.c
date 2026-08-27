/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 17:43:41 by ntong             #+#    #+#             */
/*   Updated: 2026/08/18 19:10:47 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (charset[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int	ft_count_size(char *str, char *charset)
{
	int	i;
	int	count;
	int	prev_sep;

	i = 0;
	count = 0;
	prev_sep = 1;
	while (str[i] != '\0')
	{
		if (prev_sep && !(is_sep(str[i], charset)))
			count++;
		prev_sep = is_sep(str[i], charset);
		i++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && !(is_sep(str[len], charset)))
		len++;
	return (len);
}

char	*ft_copy_word(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	array = malloc(sizeof(char *) * (ft_count_size(str, charset) + 1));
	while (str[i] != '\0')
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		len = ft_word_len(str + i, charset);
		array[j++] = ft_copy_word(str + i, len);
		i += len;
	}
	array[j] = NULL;
	return (array);
}
