/*
** FruitNode.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 20:32:57 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan 21 08:58:43 2015 Bertrand-Rapello Baptiste
*/

#ifndef FRUITNODE_H_
# define FRUITNODE_H_


#include "Fruit.h"

struct FruitNode
{
  FruitNode();
  ~FruitNode();

  FruitNode     *next;
  Fruit         *link;
  int   nb;
};


#endif
