//
// Toy.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 10:35:04 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 14:14:56 2015 Bertrand-Rapello Baptiste
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

Toy::Toy(Toy const & to) : _type(to._type), _name(to._name), _pict(to._pict)
{

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

void Toy::setData(std::string nioudata)
{
  _pict->setData(nioudata);
}

std::string Toy::getAscii() const
{
  return _pict->getData();;
}

void Toy::speak(std::string blabla)
{
  std::cout << _name << " \"" << blabla << "\"" << std::endl;
}

Toy & Toy::operator=(Toy const & to)
{
  this->_type = to._type;
  this->_name = to._name;
  this->_pict = to._pict;
  return *this;
}

std::ostream & operator<<(std::ostream &os, Toy const &obj)
{
  os  << obj.getName() << "\n" << obj.getAscii() << std::endl;
  return os;
}

Toy &Toy::operator<<(std::string const &str)
{
  this->setData(str);
  return *this;
}
