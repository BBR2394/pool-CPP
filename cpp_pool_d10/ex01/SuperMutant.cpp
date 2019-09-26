//
// SuperMutant.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:56:17 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 15:16:10 2015 Bertrand-Rapello Baptiste
//

#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
  AEnemy::takeDamage(damage-3);
}
