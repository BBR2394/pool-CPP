//
// find.hpp for  in /home/baptiste/rendu/piscine_cpp_d17/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 23 10:04:56 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 23 10:17:40 2015 Bertrand-Rapello Baptiste
//

#ifndef FIND_H_
# define FIND_H_

#include <iterator>
#include <algorithm>

template<typename T>
typename T::iterator do_find(T &a, int nb)
{
  return std::find(a.begin(), a.end(), nb);
}

#endif
