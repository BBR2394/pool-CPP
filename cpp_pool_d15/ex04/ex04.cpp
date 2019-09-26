//
// ex04.cpp for  in /home/bertra_l/rendu/piscine_cpp_d15/ex04
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 22 16:33:36 2014 Bertrand-Rapello Baptiste
// Last update Wed Jan 22 19:26:11 2014 Bertrand-Rapello Baptiste
//

#include <iostream>
#include <string>

#include "ex04.hpp"

template<typename T>
bool Tester<T>::equal(const T &a, const T &b)
{
  if (a == b)
    return true;
  return false;
}



template<typename T>
bool equal(const T &a, const T &b)
{
  if (a == b)
    return true;
  return false;
}


template bool equal<int>(const int & , const int & );
template bool equal<float>(const float & , const float & );
template bool equal<double>(const double & , const double & );
template bool equal<std::string>(const std::string & , const std::string & );

template bool Tester<int>::equal(const int & , const int & );
template bool Tester<float>::equal(const float & , const float & );
template bool Tester<double>::equal(const double & , const double & );
template bool Tester<std::string>::equal(const std::string & , const std::string & );
