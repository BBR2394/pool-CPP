/*
** drawing.h for  in /home/baptiste/rendu/piscine_cpp_d01/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 17:59:51 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 18:16:59 2015 Bertrand-Rapello Baptiste
*/

#ifndef DRAWING_H_
# define DRAWING_H_

# include <stdint.h>

typedef struct	 __attribute__((packed)) s_point
{
  unsigned int x;
  unsigned int y;
}		t_point;

void draw_square(uint32_t ** img, t_point * orig, size_t size, uint32_t color);

#endif
