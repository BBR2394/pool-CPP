/*
** menger.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 19:20:18 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 23:14:50 2015 Bertrand-Rapello Baptiste
*/

#include <stdio.h>
#include <stdlib.h>

#include "drawing.h"
#include "bitmap.h"

int	menger(int size, int level, int y, int x, unsigned int **img)
{
  t_point p = {0, 0};

  //printf("%.3d %.3d %.3d\n", size/3, (size/3)+x, (size/3)+y);
  p.x = (unsigned int)(size/3)+x;
  p.y = (unsigned int)(size/3)+y;
  draw_square(img, &p, 1, 0x00000000);
  if (level > 1)
    {
      menger(size/3, level-1,  y, x, img);
      menger(size/3, level-1,  y+(size/3), x,img);
      menger(size/3, level-1,  y+((size*2)/3), x,img);
      menger(size/3, level-1,  y, x+(size/3),img);
      menger(size/3, level-1,  y+((size*2)/3), x+(size/3),img);
      menger(size/3, level-1,  y, x+((size*2)/3),img);
      menger(size/3, level-1,  y+(size/3), x+((size*2)/3),img);
      menger(size/3, level-1,  y+((size*2)/3), x+((size*2)/3),img);
    }
  return (0);
}
