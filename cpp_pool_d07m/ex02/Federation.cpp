//
// Federation.cpp for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 10:33:00 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 23:12:13 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->_capi = NULL;
  this->_home = EARTH;
  this->_location= this->_home;
  std::cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width." << std::endl;
  std::cout << "It can go to Warp " << maxWarp << "!" << std::endl;

}

Federation::Starfleet::Ship::~Ship()
{

}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *coeur)
{
  _core = coeur;
  std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
  bool temp;
  std::string stable;

  temp = _core->_coreReactor->isStable();
  if (temp == true)
    stable = "stable";
  else
    stable = "unstable";
  std::cout << "USS " << _name << ": The core is " << stable << " at the time." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if ((warp <= _maxWarp && d != _location) && temp == true)
    {
      _location = d;
      return (true);
    }
  else
    return (false);
}

bool Federation::Starfleet::Ship::move(int warp)
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

bool Federation::Starfleet::Ship::move(Destination d)
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

bool Federation::Starfleet::Ship::move()
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

Federation::Ship::Ship(int length, int width, std::string name)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = 1;
  this->_home = VULCAN;
  this->_location = this->_home;
  std::cout << "The independant ship " << name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{
}

void Federation::Ship::setupCore(WarpSystem::Core *coeur)
{
  _core =coeur;
  std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore()
{
  bool temp;
  std::string stable;

  temp = _core->_coreReactor->isStable();
  if (temp == true)
    stable = "stable";
  else
    stable = "unstable";
  std::cout <<  _name << ": The core is " << stable << " at the time." << std::endl;
}

bool Federation::Ship::move(int warp, Destination d)
{
  bool temp;

  temp = _core->_coreReactor->isStable();
  if ((warp <= _maxWarp && d != _location) && temp == true)
    {
      _location = d;
      return (true);
    }
  else
    return (false);
}

bool Federation::Ship::move(int warp)
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

bool Federation::Ship::move(Destination d)
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

bool Federation::Ship::move()
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

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *capi)
{
  this->_capi = capi;
  std::cout << _capi->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
  _name = name;
}

Federation::Starfleet::Captain::~Captain()
{

}

std::string Federation::Starfleet::Captain::getName() const
{
  return (_name);
}
int Federation::Starfleet::Captain::getAge()
{
  return (_age);
}

void Federation::Starfleet::Captain::setAge(int niouage)
{
  _age = niouage;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
  _name = name;
  std::cout << "Ensign " << _name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}

