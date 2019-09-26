/*
** func_ptr.c for  in /home/baptiste/rendu/piscine_cpp_d02m/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 11:13:53 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 16:35:30 2015 Bertrand-Rapello Baptiste
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"func_ptr.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	print_normal(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    my_putchar(str[c++]);
  my_putchar('\n');
}

void	print_reverse(char *str)
{
  int   c;

  c = 0;
  while (str[c] != '\0')
    c++;
  c--;
  while (c >= 0)
    my_putchar(str[c--]);
  my_putchar('\n');
}

void	print_upper(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    {
      if (str[c] >= 'a' && str[c] <= 'z')
	my_putchar(str[c++] -32);
      else
	my_putchar(str[c++]);
    }
  my_putchar('\n');
}

void	print_42(char *str)
{
  (void)str;
  my_putchar('4');
  my_putchar('2');
  my_putchar('\n');
}

void	do_action(t_action action, char *str)
{
  void		(*ptr_func[4])(char*);

  ptr_func[0] = print_normal;
  ptr_func[1] = print_reverse;
  ptr_func[2] = print_upper;
  ptr_func[3] = print_42;
  ptr_func[action](str);

}

