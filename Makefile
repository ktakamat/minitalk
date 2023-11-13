# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machi <machi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 16:12:07 by yususato          #+#    #+#              #
#    Updated: 2023/11/13 21:58:25 by machi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(SERVER) $(CLIENT)

CLIENT = client

SERVER = server

SERVER_SRCS = server.c ft_printf.c ft_print_char.c ft_print_hex.c ft_print_nbr.c ft_print_ptr.c ft_print_str.c ft_print_unbr.c

CLIENT_SRCS = client.c ft_atoi.c  ft_printf.c ft_print_char.c ft_print_hex.c ft_print_nbr.c ft_print_ptr.c ft_print_str.c ft_print_unbr.c

 INCL = includes

CC = cc

CFLAG = -Wall -Wextra -Werror

SRCS = server.c \
		client.c \
		ft_printf.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_nbr.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_atoi.c \
		ft_print_unbr.c 

SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

all : $(NAME)

$(SERVER): $(SERVER_OBJS)
	$(CC) $(CFLAGS) -o $(SERVER) $(SERVER_OBJS)

$(CLIENT): $(CLIENT_OBJS)
	$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT_OBJS)

clean : 
	$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)

fclean : clean 
	$(RM) $(SERVER) $(CLIENT)

re : fclean all

.PHONY : re all fclean clean