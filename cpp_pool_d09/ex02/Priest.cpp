//
// Priest.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 17:21:03 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 22:51:53 2015 Bertrand-Rapello Baptiste
//

#include "Priest.hh"

Priest::Priest(const std::string &name, int level) : Mage(name, level)
{
  this->_name = name;
  this->_lvl = level;
  this->_pv = 100;
  this->_power = 100;
  
  this->_race = "Orc";
  this->_class = "Priest";
  this->_dmg = 4; //Strength
  this->_Stamina = 4;
  this->_Spirit = 21;
  this->_Intelligence = 42;
  this->_Agility = 2;
  this->Range = Character::CLOSE;                       
  std::cout << this->_name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack()
{
  this->_power -= 10;
  std::cout << this->_name << " uses a spirit explosion" << std::endl;
  //Range = Character::RANGE;
  return this->_Spirit + 10;
}

void Priest::Heal()
{
  this->_power -= 10;
  this->_pv += 70;
  std::cout << this->_name << " casts a little heal spell" << std::endl;
  if (this->_pv  > 100)
    this->_pv = 100;
}
