/*
** Lemon.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 10:52:52 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 20 11:19:20 2015 Bertrand-Rapello Baptiste
*/

#ifndef LEMON_H_
# define LEMON_H_

#include "Fruit.h"

class Lemon : public Fruit
{
 public:
  Lemon();
  ~Lemon();

  std::string getName() const;

};

#endif
