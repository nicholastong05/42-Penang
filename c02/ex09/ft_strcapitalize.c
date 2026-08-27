/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:14:07 by ntong             #+#    #+#             */
/*   Updated: 2026/08/10 10:53:36 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(char c);

char	*ft_strcapitalize(char *str)
{
	char	pre;
	char	*start;

	start = str;
	pre = '\0';
	while (*str != '\0')
	{
		if (!ft_isalnum(pre))
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
		}
		else
		{
			if (*str >= 'A' && *str <= 'Z')
				*str = *str + 32;
		}
		pre = *str;
		str++;
	}
	return (start);
}

int	ft_isalnum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}
