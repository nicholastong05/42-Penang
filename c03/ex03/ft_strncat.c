/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 16:13:53 by ntong             #+#    #+#             */
/*   Updated: 2026/08/10 17:26:45 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((j < nb) && (*src != '\0'))
	{
		dest[i] = *src;
		src++;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
