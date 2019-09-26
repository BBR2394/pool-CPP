//
// ex03.hpp for  in /home/baptiste/rendu/piscine_cpp_d15/ex03
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 21 15:06:46 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 15:06:47 2015 Bertrand-Rapello Baptiste
//


#ifndef EX03_H_
# define EX03_H_

#include <iostream>
#include <string>

template<typename T>
void print(T const &a)
{
  std::cout << a << std::endl;
}

template<typename T>
void foreach(const T * tab, void (func)(const T &), int nb)
{
  int	c;

  c = 0;
  while (c < nb)
    (*func)(tab[c++]);
}


#endif
