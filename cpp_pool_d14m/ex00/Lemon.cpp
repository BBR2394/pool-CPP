//
// Lemon.cpp for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 11:04:06 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 20 11:08:57 2015 Bertrand-Rapello Baptiste
//

#include "Lemon.h"

Lemon::Lemon() : Fruit("Lemon", 3)
{}

Lemon::~Lemon()
{}

std::string Lemon::getName() const
{
  return _name;
}
