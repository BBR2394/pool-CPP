//
// Hunter.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex04
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 23:17:39 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 23:35:23 2015 Bertrand-Rapello Baptiste
//

#include "Hunter.hh"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level)
{
  this->_name = name;
  this->_lvl = level;
  this->_pv = 100;
  this->_power = 100;

  this->_race = "Elf";
  this->_class = "Hunter";
  this->_dmg = 9;
  this->_Stamina = 9;
  this->_Spirit = 6;
  this->_Intelligence = 5;
  this->_Agility = 24;
  this->Range = Character::CLOSE;

  this->_weap = "sword";
  std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{}

int Hunter::RangeAttack()
{
  this->_power -= 25;
  std::cout << this->_name << " uses his bow" << std::endl;
  return (this->_Agility+20);
}

void Hunter::RestorePower()
{
  this->_power = 100;
  std::cout << this->_name << " meditates" << std::endl;
}
