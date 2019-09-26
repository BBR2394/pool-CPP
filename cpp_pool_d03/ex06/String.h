/*
** String.h for  in /home/baptiste/rendu/piscine_cpp_d03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Jan  9 22:34:55 2015 Bertrand-Rapello Baptiste
** Last update Fri Jan  9 22:34:55 2015 Bertrand-Rapello Baptiste
*/


#ifndef STRING_H_
# define STRING_H_

#include	<stdlib.h>

typedef struct	s_string
{
  char	*str;
  void	(*assign_s)(struct s_string*, const struct  s_string*);
  void  (*assign_c)(struct s_string*, const char *);
  void	(*append_s)(struct s_string*, const struct  s_string*);
  void  (*append_c)(struct s_string*, const char *);

  char	(*at)(struct s_string*, size_t);
  void	(*clear)(struct s_string*);
  int	(*size)(struct s_string*);
  int	(*compare_s)(struct s_string*, const struct s_string*);
  int	(*compare_c)(struct s_string*, char const*);
}		t_string;

typedef t_string	String;

void    StringInit(String *this, char const *s);
void    StringDestroy(String *this);

#endif
