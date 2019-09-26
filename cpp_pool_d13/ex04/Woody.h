/*
** Buzz.h for  in /home/baptiste/rendu/piscine_cpp_d13/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Jan 19 11:30:17 2015 Bertrand-Rapello Baptiste
** Last update Mon Jan 19 14:17:09 2015 Bertrand-Rapello Baptiste
*/

#ifndef WOODY_H_
# define WOODY_H_

#include "Toy.h"

class Woody : public Toy
{
 public:
  Woody(std::string name);
  Woody(std::string name,std::string pictName);
  ~Woody();

 public:
  void speak(std::string);

  Woody &operator<<(std::string const &str);

};

std::ostream & operator<<(std::ostream &os, Woody const &obj);

#endif
