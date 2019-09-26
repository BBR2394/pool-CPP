/*
** FruitNode.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 20:32:57 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 20 20:34:00 2015 Bertrand-Rapello Baptiste
*/

#ifndef FRUITNODE_H_
# define FRUITNODE_H_


#include "Fruit.h"

struct FruitNode
{
  FruitNode();
  ~FruitNode();

  FruitNode     *_next;
  Fruit         *link;
  int   nb;
};


#endif
