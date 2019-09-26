/*
** Banana.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 11:19:41 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 20 11:20:10 2015 Bertrand-Rapello Baptiste
*/

#ifndef BANANA_H_
# define BANANA_H_

#include "Fruit.h"

class Banana : public Fruit
{
 public:
  Banana();
  ~Banana();

  std::string getName() const;

};

#endif
