//
// KoalaBot.cpp for  in /home/baptiste/rendu/piscine_cpp_d07a/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 20:03:17 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 20:32:01 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include <string>

#include"KoalaBot.h"

KoalaBot::KoalaBot()
{

}

KoalaBot::~KoalaBot()
{

}

void KoalaBot::setParts(const Arms *a)
{
  this->A = a;
}

void KoalaBot::setParts(const Legs* l)
{
  this->B = l;
}

void KoalaBot::setParts(const Head* h)
{
  this->C = h;
}

void KoalaBot::swapParts(const Arms* a)
{
  this->A = a;
}

void KoalaBot::swapParts(const Legs* l)
{
  this->B = l;
}

void KoalaBot::swapParts(const Head* h)
{
  this->C = h;
}

void KoalaBot::informations()
{
  std::cout << "[KoalaBot] " << this->serial << "\n\t" << this->A->informations << std::endl;
}

bool KoalaBot::status()
{
  /*
  if (this->A.isFunctionnal == true && this->B.isFunctionnal == true)
    return (true);
  else 
  (false);*/
}
