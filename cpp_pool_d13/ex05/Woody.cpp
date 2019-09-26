//
// Buzz.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 11:36:03 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 14:18:58 2015 Bertrand-Rapello Baptiste
//

#include "Woody.h"

Woody::Woody(std::string name) : Toy(WOODY, name, "woody.txt")
{

}

Woody::Woody(std::string name,std::string pictName) : Toy(WOODY, name, pictName)
{

}

Woody::~Woody()
{

}

void Woody::speak(std::string blabla)
{
  std::cout << "WOODY: ";
  Toy::speak(blabla);
  //<< _name << "\"" << blabla << "\"" << std::endl;
}


std::ostream & operator<<(std::ostream &os, Woody const &obj)
{
  os  << obj.getName() << "\n" << obj.getAscii() << std::endl;
  return os;
}

Woody &Woody::operator<<(std::string const &str)
{
  this->setData(str);
  return *this;
}
