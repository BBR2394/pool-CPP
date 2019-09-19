/*
** main.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex04
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 22:35:24 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 23:07:10 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#include "drawing.h"
#include "bitmap.h"

int     menger(int size, int level, int y, int x, unsigned int **img);

int	main(int ac, char **av)
{
  char *name;
  size_t size;
  int level;
  t_bmp_header header;
  t_bmp_info_header info;
  unsigned int *buffer;
  unsigned int **img;
  t_point p = {0, 0};
  int d;

  if (ac < 4)
    return (0);
  name = strdup(av[1]);
  size = (size_t)atoi(av[2]);
  level = atoi(av[3]);
  printf("nom %s size %d level %d \n", name, 10, level);
  buffer = malloc(size * size * sizeof(*buffer));
  img = malloc(size * sizeof(*img));
  memset(buffer, 0, size * size * sizeof(*buffer));
  for (size_t i = 0; i < size; ++i)
    img[i] = buffer + i * size;

  make_bmp_header(&header, size);
  make_bmp_info_header(&info, size);

  draw_square(img, &p, size, 0x00000FFFF);
  p.x = 10;
  p.y = 10;
  //draw_square(img, &p, 22, 0x00FF0000);

  d = open(name, O_CREAT | O_TRUNC | O_WRONLY, 0644);
  write(d, &header, sizeof(header));
  write(d, &info, sizeof(info));
  write(d, buffer, size * size * sizeof(*buffer));
  menger((int)size, level, 0, 0, img);
  close(d);

}
