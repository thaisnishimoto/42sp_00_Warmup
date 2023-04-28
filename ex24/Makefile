# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 13:15:26 by tmina-ni          #+#    #+#              #
#    Updated: 2023/04/26 11:20:05 by tmina-ni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#gives name to the executable
NAME = libft.a

#compiler
CC = gcc

#path to directories
SRC_DIR = ./srcs
INC_DIR = ./includes

#gathers all C sources I want to compile
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

#flags for compiler
CFLAGS = -Wall -Wextra -Werror

#rule that has same name as target program
all: $(NAME)

#create lib with .o files
$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)

#rule that will launch compiling for each .o file
%.o : %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

#utilitarian rule: removes all object files (.o)
clean:
	rm -f $(OBJS)

#adds deletion of the generated executable
fclean: clean
	rm -f $(NAME)

#reset of the compilation, restart in a clean environment
re: fclean all
