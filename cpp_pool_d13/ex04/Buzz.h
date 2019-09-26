/*
** Buzz.h for  in /home/baptiste/rendu/piscine_cpp_d13/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Jan 19 11:30:17 2015 Bertrand-Rapello Baptiste
** Last update Mon Jan 19 14:19:35 2015 Bertrand-Rapello Baptiste
*/

#ifndef BUZZ_H_
# define BUZZ_H_

#include "Toy.h"

class Buzz : public Toy
{
 public:
  Buzz(std::string name);
  Buzz(std::string name,std::string pictName);
  ~Buzz();

 public:
  void speak(std::string);

  Buzz &operator<<(std::string const &str);
};

std::ostream & operator<<(std::ostream &os, Buzz const &obj);

#endif
