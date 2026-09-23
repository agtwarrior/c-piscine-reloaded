# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: david <davguerr@student.42madrid.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/21 19:01:29 by david             #+#    #+#              #
#    Updated: 2026/09/22 19:26:54 by david            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCS = includes

SRCS_DIR = srcs
SRCS =  $(SRCS_DIR)/ft_putchar.c \
		$(SRCS_DIR)/ft_putstr.c \
		$(SRCS_DIR)/ft_strcmp.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re