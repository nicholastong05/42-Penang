/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:04:31 by ntong             #+#    #+#             */
/*   Updated: 2026/08/10 11:40:16 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (size > 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	while (src[count])
		count++;
	return (count);
}
