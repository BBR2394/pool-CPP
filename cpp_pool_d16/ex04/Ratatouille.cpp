//
// Ratatouille.cpp for  in /home/baptiste/rendu/piscine_cpp_d16/ex04
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 22 14:46:57 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 22 17:11:46 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include <sstream>
#include "Ratatouille.h"

Ratatouille::Ratatouille() : marmitte("")
{

}

Ratatouille::~Ratatouille() 
{

}

Ratatouille::Ratatouille(Ratatouille const & obj) : marmitte(obj.marmitte)
{
}

Ratatouille &Ratatouille::operator=(const Ratatouille &obj)
{
  this->marmitte = obj.marmitte;
  return *this;
}

Ratatouille &Ratatouille::addVegetable(unsigned char vege)
{
  std::stringstream	osts;
  std::string		str;

  osts << vege;
  //osts >> str;

  marmitte = marmitte + osts.str();
  return *this;
}

Ratatouille &Ratatouille::addCondiment(unsigned int condi)
{
  std::stringstream     osts;
  std::string           str;

  osts << condi;
  osts >> str;

  marmitte = marmitte + str;
  return *this;
}

Ratatouille &Ratatouille::addSpice(double piment)
{
  std::stringstream     osts;
  std::string           str;

  osts << piment;
  osts >> str;

  marmitte = marmitte + str;
  return *this;
}

Ratatouille &Ratatouille::addSauce(std::string const & bolognaise)
{
  std::stringstream     osts;
  std::string           str;

  osts << bolognaise;

  marmitte = marmitte + osts.str();
  return *this;
}

std::string Ratatouille::kooc()
{
  // std::cout << marmitte;
  return marmitte;
}
