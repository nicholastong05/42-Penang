/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:40:23 by ntong             #+#    #+#             */
/*   Updated: 2026/08/13 11:52:18 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
#include <stdio.h>
int main(){
	printf("%d",ft_recursive_factorial(5));
}
*/
