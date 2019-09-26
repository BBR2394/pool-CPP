//
// Warpsystem.cpp for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 11:09:08 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 13:19:03 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Warpsystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
  _stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

bool WarpSystem::QuantumReactor::isStable()
{
  return (_stability);
}

void WarpSystem::QuantumReactor::setStability(bool newStability)
{
  _stability = newStability;
}

WarpSystem::Core::Core(WarpSystem::QuantumReactor *react)
{
  _coreReactor = react;
}

WarpSystem::Core::~Core()
{

}
