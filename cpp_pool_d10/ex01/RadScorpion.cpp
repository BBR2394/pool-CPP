//
// SuperMutant.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:56:17 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 15:23:50 2015 Bertrand-Rapello Baptiste
//

#include "RadScorpion.hh"

RadScorpion::RadScorpion() : AEnemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
  AEnemy::takeDamage(damage);
}
