//
// Borg.cpp for  in /home/baptiste/rendu/piscine_cpp_d07m/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 13:35:14 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 13:54:46 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Borg.hh"

Borg::Ship::Ship()
{
  _side = 300;
  _maxWarp = 9;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{

}

void Borg::Ship::setupCore(WarpSystem::Core *coeur)
{
  _core = coeur;
}

void Borg::Ship::checkCore()
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if (temp == true)
    std::cout << "Everything is in order." << std::endl;
  else
    std::cout << "Critical failure imminent." << std::endl;
  
}
