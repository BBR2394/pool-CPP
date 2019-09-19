/*
** main.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 14:01:40 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 23:04:10 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>

int     menger(int size, int level, int y, int x);


int	my_minigetnbr(char *str)
{
  int res;
  char c;

  c = str[0];
  res = c - 48;
  if (str[1] == '\0')
    return (res);
  c = str[1];
  res = res * 10;
  res = res + (c-48);
  if (str[2] =='\0')
    return (res);
  c = str[2];
  res = res * 10;
  res = res + (c-48);
  return (res);
}

int	main(int argc, char **argv)
{

  if (argc < 3)
    return (-1);
  menger(my_minigetnbr(argv[1]), my_minigetnbr(argv[2]), 0, 0);
  return (0);
}
