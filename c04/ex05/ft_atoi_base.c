/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:29:05 by ntong             #+#    #+#             */
/*   Updated: 2026/08/12 19:01:48 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_validate_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' '
			|| (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	returnvalue;
	int	baselen;
	int	count;
	int	sign;

	sign = 1;
	if (!(ft_validate_base(base)))
		return (0);
	baselen = 0;
	while (base[baselen] != '\0')
		baselen++;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = ft_get_sign(&str);
	returnvalue = 0;
	while (*str != '\0')
	{
		count = ft_find_char(*str, base);
		if (count == -1)
			break ;
		returnvalue = returnvalue * baselen + count;
		str++;
	}
	return (returnvalue * sign);
}
