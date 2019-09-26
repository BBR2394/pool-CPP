//
// Toy.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 10:35:04 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 11:11:59 2015 Bertrand-Rapello Baptiste
//

#include "Toy.h"

Toy::Toy() : _type(BASIC_TOY), _name("toy")
{
  this->_pict = new Picture; 
}

Toy::Toy(ToyType tpe, std::string name, std::string pictName) : _type(tpe), _name(name)
{
  this->_pict = new Picture(pictName);
}

Toy::~Toy()
{

}

Toy::ToyType Toy::getType() const
{
  return _type;
}

std::string Toy::getName() const
{
  return _name;
}

void Toy::setName(std::string name)
{
  _name = name;
}

/*
Picture Toy::getPicture() const
{
  return _pict;
}
*/
bool Toy::setAscii(std::string name)
{
  _pict->erase();
  return (_pict->getPictureFromFile(name));
}

std::string Toy::getAscii() const
{
  return _pict->getData();;
}
