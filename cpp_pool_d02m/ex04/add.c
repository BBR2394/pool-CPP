/*
** add.c for  in /home/baptiste/rendu/piscine_cpp_d02m/ex04
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 11:38:57 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 18:59:37 2015 Bertrand-Rapello Baptiste
*/

#include "castmania.h"

int normal_add(int a, int b)
{
  return (a+b);
}

int absolute_add(int a, int b)
{
  int ac, bc;
  if (a < 0)
    ac = a * -1;
  else
    ac = a;

  if (b < 0)
    bc = b * -1;
  else 
    bc = b;
  return (ac+bc);
}

void exec_add(t_add *operation)
{
  if (operation->add_type == NORMAL)
    operation->add_op.res = normal_add(operation->add_op.a, operation->add_op.b);
  else if (operation->add_type == ABSOLUTE)
    operation->add_op.res = absolute_add(operation->add_op.a, operation->add_op.b);    
}
