//
// Toy.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 10:35:04 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 16:28:29 2015 Bertrand-Rapello Baptiste
//

#include "Toy.h"

Toy::Toy() : _type(BASIC_TOY), _name("toy")
{
  this->_pict = new Picture;
  _error.setLastError(Error::UNKNOWN);
}

Toy::Toy(ToyType tpe, std::string name, std::string pictName) : _type(tpe), _name(name)
{
  this->_pict = new Picture(pictName);
}

Toy::Toy(Toy const & to) : _type(to._type), _name(to._name), _pict(to._pict)
{
  _typeerr = Error::UNKNOWN;
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
  bool rtr;

  _pict->erase();
  rtr = _pict->getPictureFromFile(name);
  if (rtr == false)
    _error.setLastError(Error::PICTURE);
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

bool Toy::speak_es(std::string qqch)
{
  (void)qqch;
  _error.setLastError(Error::SPEAK);;
  return false;
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

Toy::Error::Error()
{
  this->type = UNKNOWN;
  this->errorWhere = "";
  this->errorWhat = "";
}

Toy::Error::Error(ErrorType tpe)
{
  this->type = tpe;

  if (tpe == PICTURE)
    {
      errorWhat = "bad new illustration";
      errorWhere = "setAscii";
    }
  else if (tpe == SPEAK)
    {
      errorWhat = "wrong mode";
      errorWhere = "speak_es";
    }
  else
    {
      errorWhat = "";
      errorWhere = "";
    }
}

Toy::Error::~Error()
{
}

std::string Toy::Error::what() const
{
  return errorWhat;
}

std::string Toy::Error::where() const
{
  return errorWhere;
}

Toy::Error::ErrorType Toy::Error::getType() const
{
  return this->type;
}

void Toy::Error::setLastError(ErrorType tpe)
{
  this->type = tpe;

  if (tpe == PICTURE)
    {
      errorWhat = "bad new illustration";
      errorWhere = "setAscii";
    }
  else if (tpe == SPEAK)
    {
      errorWhat = "wrong mode";
      errorWhere = "speak_es";
    }
  else
    {
      errorWhat = "";
      errorWhere = "";
    }
}

Toy::Error Toy::getLastError() const
{
  return _error;
}
