//
// Buzz.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 11:36:03 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 13:23:07 2015 Bertrand-Rapello Baptiste
//

#include "Woody.h"

Woody::Woody(std::string name) : Toy(WOODY, name, "woody.txt")
{

}

Woody::Woody(std::string name,std::string pictName) : Toy(WOODY, name, pictName)
{

}

Woody::~Woody()
{

}

void Woody::speak(std::string blabla)
{
  std::cout << "WOODY: ";
  Toy::speak(blabla);
  //<< _name << "\"" << blabla << "\"" << std::endl;
}
