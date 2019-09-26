/*
** FruitBox.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 11:43:27 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 20 23:11:45 2015 Bertrand-Rapello Baptiste
*/

#ifndef FRUITBOX_H_
# define FRUITBOX_H_
/*
typedef struct s_fruitlist
{
  Fruit	*fru;

  struct s_fruitlist *next;
}	t_fruit;
*/

#include "FruitNode.h"

class FruitBox
{
 public:
  FruitBox(int);
  ~FruitBox();

 private:
  FruitNode *_head;
  FruitNode *_tail;
  int _nbFruit;
  int _curFruitInBox;

 public:
  int nbFruits() const;
  void checkBox();
  bool putFruit(Fruit *f);
  Fruit* pickFruit();
  FruitNode *Head();
};

#endif
