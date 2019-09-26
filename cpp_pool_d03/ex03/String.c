/*
** String.c for  in /home/baptiste/rendu/piscine_cpp_d03/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Jan  9 22:04:53 2015 Bertrand-Rapello Baptiste
** Last update Sat Jan 10 00:02:21 2015 Bertrand-Rapello Baptiste
*/


#include	"String.h"
#include        <stdlib.h>
#include	<string.h>

static void     init_funct(String *this);

int     my_strlen(const char *str)
{
  int   nb;

  nb = 0;
  while (str[nb] != '\0')
    nb++;
  return (nb);
}

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  init_funct(this);
}

void	StringDestroy(String *this)
{
  free(this->str);
}

static void	assign_s(String *this, String const * str)
{
  free(this->str);
  this->str = strdup(str->str);
}

static void	assign_c(String *this, char const * s)
{
  free(this->str);
  this->str = strdup(s);
}

static void	append_s(String *this, String const *ap)
{
  int   nb;
  char  *dest;

  nb = my_strlen(this->str);
  nb = my_strlen(ap->str) + nb;
  dest = malloc((nb+1) * sizeof(char));

  strcpy(dest, this->str);
  strcpy(dest, ap->str);
  free(this->str);
  this->str = dest;
}

static void     append_c(String *this, const char *ap)
{
  int	nb;
  char	*dest;

  nb = my_strlen(this->str);
  nb = my_strlen(ap) + nb;
  dest = malloc((nb+1) * sizeof(char));

  strcpy(dest, this->str);
  strcat(dest, ap);
  free(this->str);
  this->str = dest;
}

static char  at(struct s_string* this, size_t pos)
{
  size_t	c;

  c = 0;

  if (this->str == NULL)
    return (-1);
  c = my_strlen(this->str);
  if (pos > c+1)
    return (-1);
  if (this->str[pos+1] == '\0')
    return (-1);
  return (this->str[pos+1]);
  /*
  while (c < pos && this->str[c] != '\0')
    c++;
  if (this->str[c] == '\0')
    return (-1);
  else 
    {
      printf("jj %d\n", (int)c);
      return (this->str[c]);
      }*/
}

static void     init_funct(String *this)
{
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;
  this->at = &at;
}
