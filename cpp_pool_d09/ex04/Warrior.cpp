//
// Warrior.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 14:46:44 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 23:02:35 2015 Bertrand-Rapello Baptiste
//

#include "Warrior.hh"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
  this->_name = name;
  this->_lvl = level;
  this->_pv = 100;
  this->_power = 100;

  this->_race = "Dwarf";
  this->_class = "Warrior";
  this->_dmg = 12;
  this->_Stamina = 12;
  this->_Spirit = 5;
  this->_Intelligence = 6;
  this->_Agility = 7;
  this->Range = Character::CLOSE;

  this->_weap = "hammer";
  std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{

}

int Warrior::CloseAttack()
{
  this->_power -= 30;
  std::cout << this->_name << " strikes with his " << this->_weap << std::endl;
  return (this->_dmg+20);
}

int Warrior::RangeAttack()
{
  this->_power -=10;
  std::cout << this->_name << " intercepts" << std::endl;
  Range = Character::CLOSE;
  return (0);
}

std::string Warrior::getWeapon() const
{
  return (this->_weap);
}

void Warrior::setWeapon(std::string w)
{
  this->_weap = w;
}
