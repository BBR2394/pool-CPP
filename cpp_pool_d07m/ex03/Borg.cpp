//
// Borg.cpp for  in /home/baptiste/rendu/piscine_cpp_d07m/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 13:35:14 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 01:09:30 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Borg.hh"
#include "Warpsystem.hh"

Borg::Ship::Ship(int wF)
{
  _side = 300;
  _maxWarp = 9;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
  _home = UNICOMPLEX;
  this->_location= this->_home;
  this->_shield = 100;
  this->_weaponFrequency = wF;
  this->_repair = 3;
}

Borg::Ship::Ship(int wF, short rep)
{
  _side = 300;
  _maxWarp = 9;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
  _home = UNICOMPLEX;
  this->_location= this->_home;
  this->_shield =100;
  this->_weaponFrequency = wF;
  this->_repair = rep;
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

int Borg::Ship::getShield()
{
  return _shield;
}

void Borg::Ship::setShield(int sh)
{
  _shield = sh;
}

int Borg::Ship::getWeaponFrequency()
{
  return _weaponFrequency;
}

void Borg::Ship::setWeaponFrequency(int wF)
{
  _weaponFrequency = wF;
}

short Borg::Ship::getRepair()
{
  return _repair;
}

void Borg::Ship::setRepair(short nb)
{
  this->_repair = nb;
}
/*
void Borg::Ship::fire(Federation::Starfleet::Ship * enterprise)
{
  std::cout << "Firing on target with " << this->getWeaponFrequency() << "GW frequency." << std::endl;
  enterprise->setShield(enterprise->getShield()-this->getWeaponFrequency());
}

void Borg::Ship::fire(Federation::Ship *enterprise)
{
  WarpSystem::Core heart;
  
  (enterprise->getCore())->_coreReactor->setStability(false);
  
}

void Borg::Ship::repair()
{
}

*/
