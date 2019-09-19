##
## Makefile for  in /home/bertra_l/rendu/piscine_cpp_d01/ex_01
## 
## Made by Bertrand-Rapello Baptiste
## Login   <bertra_l@epitech.net>
## 
## Started on  Wed Jan  7 19:44:17 2015 Bertrand-Rapello Baptiste
## Last update Wed Jan  7 19:44:40 2015 Bertrand-Rapello Baptiste
##

SRC = main.c menger.c

OBJS = $(SRC:.c=.o)

NAME = menger

FLAG = -Wextra -Werror -Wall -std=gnu99

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS) $(FLAG)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all




