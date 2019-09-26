//
// Skat.cpp for  in /home/baptiste/rendu/piscine_cpp_d07a/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 16:59:58 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 18:27:16 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include <string>

#include "Skat.h"

Skat::Skat(std::string const &name, int nb)
{
  this->_name = name;
  this->stimPaks = nb;
}


Skat::Skat() : _name("bob"), stimPaks(15)
{
}

Skat::~Skat()
{
}

const std::string &Skat::name()
{
  return (this->_name);
}

void Skat::status()
{
  std::cout << "Soldier " << this->_name << " reporting " << this->stimPaks  << " stimpaks remaining sir !" << std::endl;

}

void Skat::useStimPaks()
{
  if (this->stimPaks > 0)
    {
      std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
      this->stimPaks -= 1;
    }
  else
    {
      std::cout << "Mediiiiiic" << std::endl;
    }
}

void Skat::shareStimpaks(int number, void *stock)
{
  (void)number;
  (void)stock;
}

void Skat::addStimpaks(unsigned int number)
{
  this->stimPaks = this->stimPaks + number;
  if (number == 0)
    std::cout << "Hey boya, did you forget something ?" << std::endl;
}
