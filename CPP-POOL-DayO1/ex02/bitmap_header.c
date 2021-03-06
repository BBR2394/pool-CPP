/*
** make_bmp_header.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 16:51:26 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 17:18:17 2015 Bertrand-Rapello Baptiste
*/

#include <stdio.h>
#include <stdlib.h>

#include "bitmap.h"

void make_bmp_header(t_bmp_header * header, size_t size)
{
  header->magic = 0x4D42;
  header->size = size * size * 4 + sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
  header->_app1 = 0;
  header->_app2 = 0;
  header->offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);

}

void make_bmp_info_header(t_bmp_info_header * header, size_t size)
{
  header->size = 40;
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = size * size * 4;
  header->h_resolution = 0;
  header->v_resolution = 0;
  header->palette_size = 0;
  header->important_colors = 0;
}
