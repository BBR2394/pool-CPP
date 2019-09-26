/*
** String.c for  in /home/baptiste/rendu/piscine_cpp_d03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Jan  9 22:36:28 2015 Bertrand-Rapello Baptiste
** Last update Fri Jan  9 22:36:28 2015 Bertrand-Rapello Baptiste
*/


#include	"String.h"
#include        <stdlib.h>
#include	<stdio.h>
#include	<string.h>
#include	<unistd.h>

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
  unsigned int	c;

  c = 0;
  while (c < pos && this->str[c] != '\0')
    c++;
  if (this->str[c] == '\0')
    return (-1);
  else 
    return (this->str[c]);
}

static void	clear(String *this)
{
  int	c;

  c = 0;
  while (this->str[c] != '\0')
    {
      this->str[c] = '\0';
      c++; 
    }
}

static int	size(String *this)
{
  if (this->str == NULL)
    return (-1);
  else
    return (my_strlen(this->str));
}

static int	compare_s(String *this, const String *str)
{

  return (strcmp(this->str, str->str));
}

static int      compare_c(String *this, char const *str)
{

  return (strcmp(this->str, str));

}

static size_t	copy(String *this, char *s, size_t n, size_t pos)
{
  unsigned int	c;
  unsigned int	d;

  d = 0;
  c = 0;
  while (d < pos)
    d++;
  while (c < n || this->str[d] != '\0')
    s[c++] = this->str[d++];
  return (c);
}

const char	*c_str(String *this)
{
  return ((const char*)this->str);
}

static int	empty(String *this)
{
  if (this->str == NULL || this->str[0] != '\0')
    return (-1);
  else 
    return (1);
}

static int	find_s(String *this, const String *str, size_t pos)
{

  int   c;
  int   d;

  c = 0;
  d = 0;
  while (c < (int)pos)
    c++;
  if (this->str[c] =='\0')
    return (-1);
  if (strstr(&this->str[c], str->str) == NULL)
    return (-1);
  while (this->str[c] != '\0')
    {
      if (this->str[c] == str->str[d])
        {
          while (this->str[c+d] == str->str[d])
            d++;
          if (str->str[d] == '\0')
	    return (c);
          else
            d = 0;
        }
      c++;
      }
  return (-1);
}

static int	find_c(String *this, const char *str, size_t pos)
{
  int   c;
  int   d;

  c = 0;
  d = 0;

  while (c < (int)pos)
    c++;
  if (this->str[c] =='\0')
    return (-1);
  if (strstr(&this->str[c], str) == NULL)
    return (-1);
  while (this->str[c] != '\0')
    {
      if (this->str[c] == str[d])
	{
	  while (this->str[c+d] == str[d])
	    d++;
	  if (str[d] == '\0')
	    return (c);
	  else
	    d = 0;
	}
      c++;
    }
  return (-1);
}

static void     init_funct(String *this)
{
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;
  this->at = &at;
  this->clear = &clear;
  this->size = &size;
  this->compare_s = &compare_s;
  this->compare_c = &compare_c;
  this->copy = &copy;
  this->c_str = &c_str;
  this->empty = &empty;
  this->find_c = &find_c;
  this->find_s = &find_s;
}
