//
// Victim.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 11:19:17 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 12:16:32 2015 Bertrand-Rapello Baptiste
//

#include "Victim.hh"

Victim::Victim(std::string name) : _name(name)
{
  std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const
{
  return _name;
}

void Victim::getPolymorphed() const
{
  std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &vic)
{
  os << "I'm " << vic.getName() << " and i like otters !" << std::endl;
  return os;
}

