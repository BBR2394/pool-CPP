//
// ex01.hpp for  in /home/baptiste/rendu/piscine_cpp_d15/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 21 10:54:45 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 15:01:49 2015 Bertrand-Rapello Baptiste
//


#ifndef EX01_HPP_
# define EX01_HPP_

template<typename T>
int compare(const T &a, const T &b)
{
  if (a > b)
    return 1;
  else if (a < b)
    return -1;
  else if (a == b)
    return 0;
  return 0;
}


#endif
