//
// PowerFist.cpp for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:28:13 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 14:35:03 2015 Bertrand-Rapello Baptiste
//

#include "PowerFist.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
