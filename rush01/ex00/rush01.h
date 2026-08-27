/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:06:48 by ntong             #+#    #+#             */
/*   Updated: 2026/08/15 17:07:37 by ntong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

typedef struct s_puzzle
{
	int	grid[4][4];
	int	top[4];
	int	bottom[4];
	int	left[4];
	int	right[4];
}	t_puzzle;

#endif
