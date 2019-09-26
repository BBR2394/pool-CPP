/*
** div.c for  in /home/bertra_l/rendu/piscine_cpp_d02m/ex04
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  9 11:58:58 2014 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 17:37:36 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>
#include	"castmania.h"

int	integer_div(int a, int b)
{
  if (b == 0)
    return (0);
  else
    return (a/b);
}

float	decimale_div(int a, int b)
{
  float	res;

  if (b == 0)
    return (0);
  else 
    {
      res = (float)a / (float)b;
      return (res);
    }
}

void	precalcint(t_integer_op *strc)
{
  strc->res = integer_div(strc->a, strc->b);
}

void precalcdeci(t_decimale_op *strc)
{
  strc->res = decimale_div(strc->a, strc->b);
}

void	exec_div(t_div *operation)
{
  if (operation->div_type == INTEGER)
    precalcint(operation->div_op);
  else if (operation->div_type == DECIMALE)
    precalcdeci(operation->div_op);
  
}
