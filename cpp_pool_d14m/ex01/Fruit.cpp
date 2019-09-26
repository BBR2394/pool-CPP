//
// Fruit.cpp for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 10:51:24 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 09:04:29 2015 Bertrand-Rapello Baptiste
//

#include "Fruit.h"

Fruit::Fruit()
{

}

Fruit::Fruit(std::string name, int vit) : _name(name), _vitamins(vit)
{

}

Fruit::~Fruit()
{

}

int Fruit::getVitamins() const
{
  return _vitamins;
}

Fruit &Fruit::operator=(Fruit const & obj)
{
  this->_name = obj._name;
  this->_vitamins = obj._vitamins;
  return *this;
}
