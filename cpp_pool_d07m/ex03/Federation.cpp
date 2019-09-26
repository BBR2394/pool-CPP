//
// Federation.cpp for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 10:33:00 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 01:09:09 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->_capi = NULL;
  this->_home = EARTH;
  this->_location= this->_home;
  this->_shield = 100;
  this->_photonTorpedo = 20;
  std::cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width." << std::endl;
  std::cout << "It can go to Warp " << maxWarp << "! Weapons are set:" << this->_photonTorpedo << "torpedoes ready." << std::endl;

}
Federation::Starfleet::Ship::Ship()
{
  this->_length = 289;
  this->_width = 123;
  this->_name = "Enterprise";
  this->_maxWarp = 6;
  this->_capi = NULL;
  this->_home = EARTH;
  this->_location= this->_home;
  this->_shield = 100;
  this->_photonTorpedo = 20;
  std::cout << "The ship USS Entreprise has been finished. It is 289 m in length and 132 m in width. It can go to Warp 6! Weapons are set: 20 torpedoes ready." << std::endl;
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

int Federation::Starfleet::Ship::getShield()
{
  return (_shield);
}

int Federation::Starfleet::Ship::getTorpedo()
{
  return (_photonTorpedo);
}

void Federation::Starfleet::Ship::setShield(int sh)
{
  _shield = sh;
}

void Federation::Starfleet::Ship::setTorpedo(int tor)
{
  _photonTorpedo = tor;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *borgShip)
{
  if (_photonTorpedo <=0)
    {
      std::cout << _name << ": No more torpedo to fire, " << _capi->getName() << "!" << std::endl;
    }
  else
    {
      _photonTorpedo -= 1;
      //borgShip->setShield(borgShip->getShield()-(1*50));
      std::cout << this->_name << ": Firing on target. " << _photonTorpedo  << " torpedoes remaining."<< std::endl;
    }
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *borgShip)
{
  if (_photonTorpedo <=0)
    {
      std::cout << _name << ": No more torpedo to fire, " << _capi->getName() << "!" << std::endl;
    }
  else if (torpedoes > _photonTorpedo)
    {
      std::cout << _name << ": No more torpedo to fire, " << _capi->getName() << "!" << std::endl;
    }
  else
    {
      _photonTorpedo = _photonTorpedo - 1;
      //borgShip->setShield(borgShip->getShield()-(torpedoes*50));
      std::cout << this->_name << ": Firing on target. " << _photonTorpedo  << " toredoes remaining."<< std::endl;
    }
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

WarpSystem::Core  *Federation::Ship::getCore()
{
  return _core;
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

