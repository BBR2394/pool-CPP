//
// Paladin.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex03
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 17:48:57 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 23:47:15 2015 Bertrand-Rapello Baptiste
//

#include "Paladin.hh"


Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level), Priest(name, level)
{
  this->_name = name;
  this->_lvl = level;
  this->_pv = 100;
  this->_power = 100;
    this->_race = "Humain";
  this->_class = "Paladin";
  this->_dmg = 9; //Strength                                                  
  this->_Stamina = 10;
  this->_Spirit = 10;
  this->_Intelligence = 10;
  this->_Agility = 2;
  this->Range = Character::CLOSE;
  std::cout << "the light falls on " << this->_name << std::endl;
}

Paladin::~Paladin()
{

}

int Paladin::CloseAttack()
{
  return (Warrior::CloseAttack());
}

int Paladin::RangeAttack()
{
  return (Priest::RangeAttack());
}

void Paladin::Heal()
{
  Priest::Heal();
}

void Paladin::RestorePower()
{
  Warrior::RestorePower();
}

int Paladin::Intercept()
{
  return (Character::RANGE);
}
