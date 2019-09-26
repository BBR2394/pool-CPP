//
// Mage.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 16:33:19 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 22:57:26 2015 Bertrand-Rapello Baptiste
//

#include "Character.hh"
#include "Mage.hh"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
  this->_name = name;
  this->_lvl = level;
  this->_pv = 100;
  this->_power = 100;

  this->_race = "Gnome";
  this->_class = "Mage";
  this->_dmg = 6;
  this->_Stamina = 6;
  this->_Spirit = 11;
  this->_Intelligence = 12;
  this->_Agility = 7;
  this->Range = Character::CLOSE;

  //this->_weap = "hammer";
  std::cout << this->_name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
  this->_power -= 10;
  std::cout << this->_name << " blinks" << std::endl;
  Range = Character::RANGE;
  return 0;
}

int Mage::RangeAttack()
{
  this->_power -=25;
  std::cout << this->_name << " launches a fire ball" << std::endl;
  return (this->_Spirit+20);
}

void Mage::RestorePower()
{
  this->_power = 100;
  std::cout << this->_name << " takes a mana potion" << std::endl;
}
