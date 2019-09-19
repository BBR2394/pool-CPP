/*
** drawing.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 18:02:54 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 23:11:32 2015 Bertrand-Rapello Baptiste
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "drawing.h"

void draw_square(uint32_t ** img, t_point * orig, size_t size, uint32_t color)
{
  int c, d;

  d = orig->x;
  c = orig->y;
  while (c < (int)size+orig->y)
    {
      while (d < (int)size+orig->x)
	{
	  img[c][d] = color;
	  d++;
	}
      c++;
      d = orig->y;
    }
}
