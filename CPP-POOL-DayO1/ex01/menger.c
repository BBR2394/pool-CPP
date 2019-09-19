/*
** menger.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 19:20:18 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 23:03:50 2015 Bertrand-Rapello Baptiste
*/

#include <stdio.h>
#include <stdlib.h>

int	menger(int size, int level, int y, int x)
{
  printf("%.3d %.3d %.3d\n", size/3, (size/3)+x, (size/3)+y);
  if (level > 1)
    {
      menger(size/3, level-1,  y, x);
      menger(size/3, level-1,  y+(size/3), x);
      menger(size/3, level-1,  y+((size*2)/3), x);
      menger(size/3, level-1,  y, x+(size/3));
      menger(size/3, level-1,  y+((size*2)/3), x+(size/3));
      menger(size/3, level-1,  y, x+((size*2)/3));
      menger(size/3, level-1,  y+(size/3), x+((size*2)/3));
      menger(size/3, level-1,  y+((size*2)/3), x+((size*2)/3));
    }
  return (0);
}
