//
// Buzz.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 11:36:03 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 11:40:51 2015 Bertrand-Rapello Baptiste
//

#include "Buzz.h"

Buzz::Buzz(std::string name) : Toy(BUZZ, name, "buzz.txt")
{

}

Buzz::Buzz(std::string name,std::string pictName) : Toy(BUZZ, name, pictName)
{

}

Buzz::~Buzz()
{

}

