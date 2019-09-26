//
// Fruit.cpp for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 10:51:24 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 20 11:24:22 2015 Bertrand-Rapello Baptiste
//

#include "Fruit.h"

Fruit::Fruit(std::string name, int vit) : _name(name), _vitamines(vit)
{

}

Fruit::~Fruit()
{

}

int Fruit::getVitamins() const
{
  return _vitamines;
}

Fruit &Fruit::operator=(Fruit const & obj)
{
  this->_name = obj._name;
  this->_vitamines = obj._vitamines;
  return *this;
}
