//
// AEnemy.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:38:37 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 22:29:35 2015 Bertrand-Rapello Baptiste
//

#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const & type) : _hp(hp), _type(type)
{

}

int AEnemy::getHP() const
{
  return _hp;
}

std::string AEnemy::getType() const
{
  return _type;
}

void AEnemy::takeDamage(int damage)
{
  if (damage > 0)
    _hp -= damage;

}
