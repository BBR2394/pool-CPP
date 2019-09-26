//
// Character.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 15:28:15 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 16:04:44 2015 Bertrand-Rapello Baptiste
//

#include "Character.hh"

Character::Character(std::string const &name) : _name(name), _ap(40)
{
  this->_weap = NULL;
}

Character::~Character()
{

}

void Character::recoverAP()
{
  _ap += 10;
  if (_ap > 40)
    _ap = 40;
}

void Character::equip(AWeapon *weap)
{
  _weap = weap;
}

void Character::attack(AEnemy *en)
{
  if (_ap > 0)
    {
      std::cout << _name << " attacks " << en->getType() << " with a " << _weap->getName() <<std::endl;
      _weap->attack();
      en->takeDamage(_weap->getDamage());
      _ap -= _weap->getAPCost();
      if (en->getHP() <= 0)
	delete en;
    }
}

std::string Character::getName() const
{
  return _name;
}

int Character::getAP() const
{
  return _ap;
}

std::string Character::getWeaponName() const
{
  return _weap->getName();
}

AWeapon *Character::getWeapon() const
{
  return _weap;
}

std::ostream &operator<<(std::ostream &os, Character const &obj)
{
  if (obj.getWeapon() == NULL)
    {
      os <<  obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
    }
  else
    {
      os << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeaponName() << std::endl;
    }
  return (os);
}
