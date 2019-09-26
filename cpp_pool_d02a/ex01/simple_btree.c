/*
** simple_btree.c for  in /home/bertra_l/rendu/piscine_cpp_d02a/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  9 22:21:29 2014 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 18:48:18 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>

#include	"simple_btree.h"

t_bool	btree_is_empty(t_tree tree)
{
  if (tree == NULL)
    return (FALSE);
  else 
    return (TRUE);
}

unsigned int btree_get_size(t_tree tree)
{
  static int	c = 0;

  c++;
  if (tree->left != NULL)
    {
    if (tree->right != NULL)
      btree_get_size(tree->right);
    btree_get_size(tree->left);
    }
  return (c);
}

unsigned int	btree_get_depth(t_tree tree)
{
  static int c = 0;

  if (tree == NULL)
    return (0);
  c++;
  if (tree->left != NULL)
    btree_get_depth(tree->left);
  return (c);
}

t_bool btree_create_node(t_tree *node_ptr, double value)
{
  t_node  *node;
  t_node *cpy;

  node = malloc(sizeof(t_tree));
  if (node == NULL)
    return (FALSE);
  else
    {
      node->value = value;
      *node_ptr = node;
      return (TRUE);
    }
}

t_bool btree_delet(t_tree *root_ptr)
{

}
/*
double btree_get_max_suite(t_tree tree, double c)
{
  printf("%f tree %f\n", c, tree->value);
  if (tree->left != NULL)
    {
      if (tree->right != NULL)
        {
          btree_get_max_suite(tree->right, c);
          if (c < tree->value)
            c = tree->value;
        }
      btree_get_max_suite(tree->left, c);
      if (c < tree->value)
        c = tree->value;
    }
  if (c < tree->value)
    c = tree->value;
  return (c);

}
*/
double btree_get_max_value(t_tree tree)
{
  static double    c = 0;
  static int	d = 1;

  if (d == 1)
    c = tree->value;
  d = 2;
  printf("%f tree %f d %d\n", c, tree->value, d); 
  if (tree->left != NULL)
    {
      if (tree->right != NULL)
        {
          btree_get_max_value(tree->right);
          if (c < tree->value)
            c = tree->value;
        }
      btree_get_max_value(tree->left);
      if (c < tree->value)
        c = tree->value;
    }
  if (c < tree->value)
    c = tree->value;
  return (c);
 
}

double btree_get_min_value(t_tree tree)
{
  static double    c = 0;
  static int d = 1;

  if (d == 1)
    c = tree->value;
  d = 2;
  printf("%f tree %f d %d \n", c, tree->value, d);
  if (tree->left != NULL)
    {
      if (tree->right != NULL)
        {
          btree_get_max_value(tree->right);
          if (c > tree->value)
            c = tree->value;
        }
      btree_get_max_value(tree->left);
      if (c > tree->value)
        c = tree->value;
    }
  if (c > tree->value)
    c = tree->value;
  printf("%f\n", c);
  return (c);

}
