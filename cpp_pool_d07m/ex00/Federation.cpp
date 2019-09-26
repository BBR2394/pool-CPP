//
// Federation.cpp for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 10:33:00 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 13:24:11 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;

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

Federation::Ship::Ship(int length, int width, std::string name)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = 1;

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
