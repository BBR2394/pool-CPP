//
// ex00.hpp for  in /home/baptiste/rendu/piscine_cpp_d15/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 21 10:55:03 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 10:55:03 2015 Bertrand-Rapello Baptiste
//


#ifndef EX00_HPP_
# define EX00_HPP_

template<typename T>
void swap(T &a, T &b)
{
  T var;

  var = a;
  a = b;
  b = var;

}

template<typename T>
T min(const T a,const  T b)
{
  if (a < b)
    return a;
  else if (a > b)
    return b;
  else if (a == b)
    return b;
  return b;
}

template<typename T>
T max(const T a,const  T b)
{
  if (a < b)
    return b;
  else if (a > b)
    return a;
  else if (a == b)
    return b;
  return b;
}

template<typename T>
T add(const T a, const T b)
{
  T res;

  res = a + b;
  return res;

}

#endif
