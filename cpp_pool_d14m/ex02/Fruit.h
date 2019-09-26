/*
** Fruit.h for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 20 10:48:10 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 20 15:30:17 2015 Bertrand-Rapello Baptiste
*/

#ifndef FRUIT_H_
# define FRUIT_H_

#include <iostream>

class Fruit
{
 public:
  Fruit(std::string , int);
  ~Fruit();
  Fruit &operator=(Fruit const &);

 protected:
  std::string _name;
  int _vitamines;
  Fruit *next;

 public:
  int getVitamins() const;
  virtual std::string getName() const = 0;
};

#endif
