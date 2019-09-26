/*
** tab_to_2dtab.c for  in /home/bertra_l/rendu/piscine_cpp_d02m/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  9 11:03:24 2014 Bertrand-Rapello Baptiste
** Last update Thu Jan  9 14:10:44 2014 Bertrand-Rapello Baptiste
*/

#include	<stdlib.h>

void	tab_to_2dtab(int *tab, int length, int width, int ***res)
{
  int	**tab2;
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  c = 0;

  tab2 = malloc(length * sizeof(int *));

  while (a < length)
    tab2[a++] = malloc(width * sizeof(int));

  a = 0;
  while (a < length)
    {
      while (b < width)
	tab2[a][b++] = tab[c++];
      b = 0;
      a++;
    }
  *res = tab2;
}
