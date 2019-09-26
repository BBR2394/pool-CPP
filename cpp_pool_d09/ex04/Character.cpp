//
// Character.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 12:17:28 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 15:50:59 2015 Bertrand-Rapello Baptiste
//

#include "Character.hh"

Character::Character(const std::string &name, int lvl)
{
  this->_name = name;
  this->_lvl = lvl;
  this->_pv = 100;
  this->_power = 100;
  this->_race = "Koala";
  this->_class = "Character";
  std::cout << this->_name << " Created" << std::endl;
  this->_dmg = 5;
  this->_Stamina = 5;
  this->_Spirit = 5;
  this->_Intelligence = 5;
  this->_Agility = 5;
  this->Range = Character::CLOSE;
}

Character::~Character()
{
}

int Character::getLvl() const
{
  return (this->_lvl);
}

int Character::getPv() const
{
  return (this->_pv);
}

int Character::getPower() const
{
  return (this->_power);
}

const std::string Character::getName() const
{
  return (this->_name);
}

void Character::setClass(std::string cl)
{
  this->_class = cl;
}

void Character::setRace(std::string rc)
{
  this->_race = rc;
}

std::string Character::getClass() const
{
  return (this->_class);
}

std::string Character::getRace() const
{
  return (this->_race);
}


int Character::CloseAttack()
{
  this->_power -= 10;
  std::cout << this->_name << " strikes with a wood stick" << std::endl;
  return (this->_dmg+10);
}

int Character::RangeAttack()
{
  this->_power -=10;
  std::cout << this->_name << " launches a stone" << std::endl;
  return (this->_dmg+5);
}

void Character::RestorePower()
{
  this->_power = 100;
  std::cout << this->_name << " eats" << std::endl;
}

void Character::Heal()
{
  this->_pv += 50;
  std::cout << this->_name << " takes a potion" << std::endl;
  if (this->_pv  > 100)
    this->_pv = 100;
}

void Character::TakeDamage(int _damage)
{
  this->_pv = this->_pv - _damage;
  if (this->_pv <= 0)
    {
      this->_pv  = 0;
      std::cout << this->_name << " out of combat" << std::endl;
    }
  else
    std::cout << this->_name << " takes " << _damage << " damage" << std::endl;

}
