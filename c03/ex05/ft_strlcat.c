/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:27:23 by ntong             #+#    #+#             */
/*   Updated: 2026/08/11 13:41:40 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	srclen;

	count = 0;
	i = 0;
	srclen = 0;
	while ((dest[count] != '\0') && (count < size))
		count++;
	while (src[srclen] != '\0')
		srclen++;
	if (count >= size)
		return (count + srclen);
	while ((*src != '\0') && (count + i < size - 1))
	{
		dest[count + i] = *src;
		src++;
		i++;
	}
	dest[count + i] = '\0';
	return (count + srclen);
}
