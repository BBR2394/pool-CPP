//
// Peon.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 12:01:48 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 12:14:34 2015 Bertrand-Rapello Baptiste
//

#include "Peon.hh"

Peon::Peon(std::string name) : Victim(name)
{
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}


void Peon::getPolymorphed() const
{
  std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

/*
std::ostream &operator<<(std::ostream &os, Victim const &pe)
{
  os << "I'm " << pe.getName() << " and i like otters !";
  return os;
}

*/
