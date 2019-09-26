//
// Borg.cpp for  in /home/baptiste/rendu/piscine_cpp_d07m/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 13:35:14 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 14:47:27 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Borg.hh"

Borg::Ship::Ship()
{
  _side = 300;
  _maxWarp = 9;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
  _home = UNICOMPLEX;
  this->_location= this->_home;
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

bool Borg::Ship::move(int warp, Destination d)
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if ((warp <= _maxWarp && d != _location) && temp == true)
    {
      _location = d;
      return (true);
    }
  else
    {
      return (false);
    }

}

bool Borg::Ship::move(int warp)
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if (warp <= _maxWarp && temp == true)
    {
      _location = _home;
      return (true);
    }
  else 
    return (false);
}

bool Borg::Ship::move(Destination d)
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if (d != _location && temp == true)
    {
      _location = d;
      return (true);
    }
  else 
    return (false);
}

bool Borg::Ship::move()
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if (_location != _home && temp == true)
    {
      _location = _home;
      return (true);
    }
  else 
    return (false);
}
