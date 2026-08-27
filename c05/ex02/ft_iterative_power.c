/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:54:20 by ntong             #+#    #+#             */
/*   Updated: 2026/08/13 12:01:23 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main(){
	printf("%d",ft_iterative_power(2,3));
}
*/
