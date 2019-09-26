/*
** stack.c for  in /home/baptiste/rendu/piscine_cpp_d02a/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 23:19:38 2015 Bertrand-Rapello Baptiste
** Last update Fri Jan  9 01:01:17 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>

#include "generic_list.h"
#include "queue.h"

unsigned int    queue_get_size(t_queue queue)
{
  unsigned int	c;

  c = 0;
  while (queue != NULL)
    {
      queue = queue->next;
      c++;
    }
  return (c);
}

t_bool          queue_is_empty(t_queue queue)
{
  if (queue == NULL)
    return (FALSE);
  else
    return (TRUE);
}

t_bool  queue_push(t_queue *queue_ptr, void *elem)
{
  t_node        *link;
  t_node        *cpy;
  static int c = 0;

  link = malloc(sizeof(t_queue));
  if (link == NULL)
    return (FALSE);
  link->value = elem;
  link->next = NULL;
  if (c == 0)
    {
      queue_ptr = &link;
      return (TRUE);
    }
  else if (c == 1)
    {
      cpy = *queue_ptr;
      cpy->next = link;
      return (TRUE);
    }
  else 
    {
      cpy = *queue_ptr;
      while (cpy->next != NULL)
	cpy = cpy->next;
      cpy->next = link;
    }
  return (TRUE);
  /*
  //  queue_ptr = &link;
  //return (0);

  // cpy = *queue_ptr;
  //if (cpy != NULL)
  // cpy = cpy->next;
  if (*queue_ptr == NULL)
    {
      write(1, "A", 1);
      queue_ptr = &link;
      return (TRUE);
    }
  return (0);
  while (cpy->next != NULL)
    {
      write(1, "a", 1);
      cpy = cpy->next;
    }
  cpy->next = link;
  return (TRUE);*/
}

t_bool queue_pop(t_queue *queue_ptr)
{
  t_node        *cpy;

  cpy = *queue_ptr;
  if (cpy == NULL)
    return (FALSE);
  *queue_ptr = cpy->next;
  return (TRUE);

}

void *queue_front(t_queue queue)
{
  return (queue->value);
}
