//
// Parts.cpp for  in /home/baptiste/rendu/piscine_cpp_d07a/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 18:53:54 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 19:24:09 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include <string>

#include "Parts.h"

Arms::Arms(std::string serial, bool functionnal)
{
  this->_serial = serial;
  this->_fun = functionnal;
}

Arms::Arms()
{
  this->_serial = "A-01";
  this->_fun = true;
}

Legs::Legs(std::string serial, bool functionnal)
{
  this->_serial = serial;
  this->_fun = functionnal;
}

Legs::Legs()
{
  this->_serial = "L-01";
  this->_fun = true;
}

Head::Head(std::string serial, bool functionnal)
{
  this->_serial = serial;
  this->_fun = functionnal;
}

Head::Head()
{
  this->_serial = "H-01";
  this->_fun = true;
}

Arms::~Arms()
{}

Legs::~Legs()
{}

Head::~Head()
{}

bool Arms::isFunctionnal() const
{
  return this->_fun;
}

bool Legs::isFunctionnal() const
{
  return this->_fun;
}

bool Head::isFunctionnal() const
{
  return this->_fun;
}

std::string Arms::serial() const
{
  return this->_serial;
}

std::string Legs::serial() const
{
  return this->_serial;
}

std::string Head::serial() const
{
  return this->_serial;
}

void Arms::informations()
{
  std::cout << "Arms" << " "<< this->_serial << " status : ";

  if (this->_fun == true)
    std::cout << "OK" << std::endl;
  else  
    std::cout << "KO" << std::endl;
}

void Legs::informations()
{
  std::cout << "Legs" << " " << this->_serial << " status : ";

  if (this->_fun == true)
    std::cout << "OK" << std::endl;
  else
    std::cout << "KO" << std::endl;
}

void Head::informations()
{
  std::cout << "Head" << " " << this->_serial << " status : ";

  if (this->_fun == true)
    std::cout << "OK" << std::endl;
  else
    std::cout << "KO" << std::endl;
}
