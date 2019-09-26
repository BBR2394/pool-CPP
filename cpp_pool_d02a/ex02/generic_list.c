/*
** simple_list.c for  in /home/bertra_l/rendu/piscine_cpp_d02a/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  9 16:42:36 2014 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 23:14:54 2015 Bertrand-Rapello Baptiste
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	"generic_list.h"

unsigned int	list_get_size(t_list list)
{
  int	c;

  c = 0;

  while (list != NULL)
    {
      c++;
      list = list->next;
    }
  return (c);
}

t_bool	list_is_empty(t_list list)
{
  if (list == NULL)
    return (TRUE);
  else
    return (FALSE);
}

//typedef void (*t_value_displayer)(void *value);
void list_dump(t_list list, t_value_displayer val_disp)
{
  //(void)list;
  //(void)val_disp;
  while (list != NULL)
    {
      val_disp(list->value);
      list = list->next;
    }

}

t_bool	list_add_elem_at_front(t_list *front_ptr, void *elem)
{
  t_node	*link;
  t_node	*cpy;

  cpy = *front_ptr;
  link = malloc(sizeof(t_node));
  if (link == NULL)
    return (FALSE);
  link->value = elem;
  link->next = cpy;
  *front_ptr = link;
  return (TRUE);
}

t_bool	list_add_elem_at_back(t_list *front_ptr, void  *elem)
{
  t_node	*link;
  t_node	*cpy;

  cpy = *front_ptr;
  link = malloc(sizeof(t_node));
  if (link == NULL)
    return (FALSE);
  link->value = elem;
  link->next = NULL;
  if (cpy == NULL)
    {
      *front_ptr = link;
      return (TRUE);
    }
  while (cpy->next != NULL)
    {
      cpy = cpy->next;
    }
  cpy->next = link;
  return (TRUE);
}

t_bool	list_add_elem_at_position(t_node **front_ptr, void *elem, unsigned int position)
{
  unsigned int	c;
  t_node	*link;
  t_node	*cpy;
  t_node	*cpy2;

  cpy = *front_ptr;
  cpy2 = cpy;
  c = 0;
  link = malloc(sizeof(t_node));
  if (link == NULL)
    return (FALSE);
  link->value = elem;
  if (position == 0)
    {
      list_add_elem_at_front(front_ptr, elem);
      return (TRUE);
    }
  while (c < position && cpy != NULL)
    {
      cpy2 = cpy;
      cpy = cpy->next;
      c++;
    }
  cpy2->next = link;
  link->next = cpy;
  return (TRUE);
}

t_bool	list_del_elem_at_front(t_list *front_ptr)
{
  t_node	*cpy;

  cpy = *front_ptr;

  if (cpy == NULL)
    {
      return (FALSE);
    }
  *front_ptr = cpy->next;
  return (TRUE);
}

t_bool  list_del_elem_at_back(t_list *front_ptr)
{
  t_node        *cpy;
  t_node	*cpy2;

  cpy = *front_ptr;
  cpy2 = cpy;
  if (cpy == NULL)
    {
      return (FALSE);
    }
  while (cpy->next != NULL)
    {
      cpy2 = cpy;
      cpy = cpy->next;
    }
  cpy2->next = NULL;
  free(cpy);
  return (TRUE);
}

t_bool	list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
  int   c;
  t_node        *cpy;
  t_node        *cpy2;

  cpy = *front_ptr;
  cpy2 = cpy;
  c = 0;
  if (cpy == NULL)
    return (FALSE);
  if (position == 0)
    {
      list_del_elem_at_front(front_ptr);
      return (TRUE);
    }
  while (c < (int)position || cpy != NULL)
    {
      cpy2 = cpy;
      cpy = cpy->next;
      c++;
    }
  cpy2->next = cpy->next;
  free(cpy);
  return (TRUE);
}

t_node	*list_get_first_node_with_value(t_list list, void *value, t_value_comparator val_comp)
{
  while (val_comp(list->value, value) != 0)
    {
      if (list == NULL)
	return (NULL);
      list = list->next;
    }
  return (list);
}

void	*list_get_elem_at_front(t_list list)
{
  if (list == NULL)
    return (0);
  else 
    return (list->value);
}

void	*list_get_elem_at_back(t_list list)
{

  if (list == NULL)
    return (0);

  while (list->next != NULL)
    {
      list = list->next;
    }
  return (list->value);

}

void 	*list_get_elem_at_position(t_list list, unsigned int position)
{
  int	c;

  c = 0;
  if (position == 0)
    return (list_get_elem_at_front(list));
  else
    {
      while (c < (int)position)
	{
	  list = list->next;
	  c++;
	}
      return (list->value);
    }
}
