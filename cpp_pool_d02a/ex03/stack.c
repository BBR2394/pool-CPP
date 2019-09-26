/*
** stack.c for  in /home/baptiste/rendu/piscine_cpp_d02a/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 23:19:38 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 23:39:54 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>

#include "generic_list.h"
#include "stack.h"

unsigned int    stack_get_size(t_stack stack)
{
  unsigned int	c;

  c = 0;
  while (stack != NULL)
    {
      stack = stack->next;
      c++;
    }
  return (c);
}

t_bool          stack_is_empty(t_stack stack)
{
  if (stack == NULL)
    return (FALSE);
  else
    return (TRUE);
}

t_bool  stack_push(t_stack *stack_ptr, void *elem)
{
  t_node        *link;
  t_node        *cpy;

  cpy = *stack_ptr;
  link = malloc(sizeof(t_stack));
  if (link == NULL)
    return (FALSE);
  link->value = elem;
  link->next = cpy;
  *stack_ptr = link;
  return (TRUE);
}

t_bool stack_pop(t_stack *stack_ptr)
{
  t_node        *cpy;

  cpy = *stack_ptr;
  if (cpy == NULL)
    return (FALSE);
  *stack_ptr = cpy->next;
  return (TRUE);

}

void *stack_top(t_stack stack)
{
  return (stack->value);
}
