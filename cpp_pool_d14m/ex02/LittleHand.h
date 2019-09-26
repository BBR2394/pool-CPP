/*
** LittleHand.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 22:46:15 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 20 23:22:54 2015 Bertrand-Rapello Baptiste
*/

#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include "FruitBox.h"

class LittleHand
{
 public:
  LittleHand();
  ~LittleHand();

 private:
  int nbBanana;
  int nbLemon;
  int nbLime;
  int nbOther;

 public:
  void sortFruitBox(FruitBox &, FruitBox & , FruitBox &, FruitBox &);
};


#endif
