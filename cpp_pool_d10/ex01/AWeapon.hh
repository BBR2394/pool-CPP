//
// AWeapon.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 13:39:21 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 15:40:35 2015 Bertrand-Rapello Baptiste
//

#ifndef AWEAPON_HH_
# define AWEAPON_HH_

#include <iostream>

class AWeapon
{
public:
  AWeapon(std::string const &name, int apcost, int damage);
  virtual ~AWeapon() {};
  std::string getName() const;
  int getAPCost() const;
  int getDamage() const;
  virtual void attack() const = 0;

protected:
  std::string	_name;
  int           _AP;
  int		_dmg;

};

#endif 
