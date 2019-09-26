//
// Banana.cpp for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 11:20:24 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 20 11:21:40 2015 Bertrand-Rapello Baptiste
//

#include "Banana.h"

Banana::Banana() : Fruit("Banana", 5)
{}

Banana::~Banana()
{}

std::string Banana::getName() const
{
  return _name;
}
