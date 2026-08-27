# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntong <ntong@student.42penang.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/18 15:32:27 by ntong             #+#    #+#              #
#    Updated: 2026/08/18 15:37:20 by ntong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -Wall -Wextra -Werror -c ft_putchar.c
cc -Wall -Wextra -Werror -c ft_swap.c
cc -Wall -Wextra -Werror -c ft_putstr.c
cc -Wall -Wextra -Werror -c ft_strlen.c
cc -Wall -Wextra -Werror -c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
