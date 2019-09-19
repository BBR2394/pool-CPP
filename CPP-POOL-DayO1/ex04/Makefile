##
## Makefile for  in /home/bertra_l/rendu/piscine_cpp_d01/ex_01
## 
## Made by Bertrand-Rapello Baptiste
## Login   <bertra_l@epitech.net>
## 
## Started on  Wed Jan  7 19:44:17 2015 Bertrand-Rapello Baptiste
## Last update Wed Jan  7 22:49:56 2015 Bertrand-Rapello Baptiste
##

SRC = main.c drawing.c bitmap_header.c menger.c 

OBJ = $(SRC:.c=.o)

NAME = menger_face

all: $(NAME)

$(NAME): $(OBJ) -std=gnu99 -Wall -Wextra -Werror
	gcc -o $(NAME) $(OBJ) -std=gnu99 -Wall -Wextra -Werror

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
