# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: david <davguerr@student.42madrid.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/22 11:25:15 by david             #+#    #+#              #
#    Updated: 2026/09/22 19:48:13 by david            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

all:ft_display_file

ft_display_file: main.c
	$(CC) $(CFLAGS) main.c -o ft_display_file

clean:

fclean: clean
	rm -f ft_display_file

.PHONY: all clean fclean