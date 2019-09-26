/*
** mem_ptr.c for  in /home/bertra_l/rendu/piscine_cpp_d02m/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  9 10:14:33 2014 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 10:04:40 2015 Bertrand-Rapello Baptiste
*/

#include	<stdlib.h>
#include	"mem_ptr.h"

int	my_strlen(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    c++;
  return (c);
}

void	add_str(char *str1, char *str2, char **res)
{
  int	c;
  int	d;
  char	*tab;

  tab = malloc ((my_strlen(str1)+my_strlen(str2) + 1) * sizeof(char));
  if (tab == NULL)
    {
      *res = NULL;
    }
  else
    {
      tab[my_strlen(str1)+my_strlen(str2)] = '\0';
      d = 0;
      c = 0;
      while (str1[c] != '\0')
	{
	  tab[c] = str1[c];
	  c += 1;
	}
      while (str2[d] != '\0')
	{
	  tab[c] = str2[d];
	  c += 1;
	  d += 1;
	}
      *res = tab;
    }
}


void	add_str_struct(t_str_op *str_op)
{
  int	c;
  int	d;

  c = 0;
  d = 0;

  str_op->res = malloc ((my_strlen(str_op->str1)+my_strlen(str_op->str2) + 1) * sizeof(char));

  str_op->res[my_strlen(str_op->str1)+my_strlen(str_op->str2)] = '\0';
  while (str_op->str1[c] != '\0')
    {
      str_op->res[c] = str_op->str1[c];
      c += 1;
    }
  while (str_op->str2[d] != '\0')
    str_op->res[c++] = str_op->str2[d++];
}
