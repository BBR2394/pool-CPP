//
// Sorcerer.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 10:45:41 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 21:59:17 2015 Bertrand-Rapello Baptiste
//

#include "Sorcerer.hh"
#include "Victim.hh"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
  std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
  std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" <<std::endl;
}
/*
void Sorcerer::setName(std::string niouName)
{
  _name = niouName;
}

void Sorcerer::setTitle(std::string niouTitle)
{
  _title = niouTitle;
}
*/
std::string Sorcerer::getName() const
{
  return (_name);
}

std::string Sorcerer::getTitle()const
{
  return (_title);
}

void Sorcerer::polymorph(Victim const & vic) const
{
  vic.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &sor)
{
  os << "I am " << sor.getName() << ", " << sor.getTitle() << ", and I like ponies !" << std::endl ;
  return (os);
} 
