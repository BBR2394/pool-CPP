//
// AWeapon.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 13:53:55 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 14:14:12 2015 Bertrand-Rapello Baptiste
//

#include "AWeapon.hh"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _AP(apcost), _dmg(damage)
{}

std::string AWeapon::getName() const
{
  return _name;
}

int AWeapon::getAPCost() const
{
  return _AP;
}

int AWeapon::getDamage() const
{
  return _dmg;
}
