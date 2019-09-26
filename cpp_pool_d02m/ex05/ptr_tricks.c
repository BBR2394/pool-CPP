/*
** ptr_trick.c for  in /home/baptiste/rendu/piscine_cpp_d02m/ex05
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 19:27:35 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 20:18:38 2015 Bertrand-Rapello Baptiste
*/

#include <stdio.h>
#include "ptr_tricks.h"

t_whatever *get_struct_ptr(int *member_ptr)
{
  t_whatever test;
  void *ptrdeb;
  void *ptrmember;
  char c;

  c = 0;
  ptrdeb = &test;
  ptrmember = &test.member;
  while (ptrmember != ptrdeb)
    {
      ptrmember--;
      c++;
    }
  return ((void*)member_ptr - c);
}

int get_array_nb_elem(int *ptr1, int *ptr2)
{
  int	c;
  int *cpy;

  cpy = ptr1;
  c = 0;
  while (cpy != ptr2)
    {
      c++;
      cpy++;
    }
  return (c);
}

