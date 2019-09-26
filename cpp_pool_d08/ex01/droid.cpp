//
// droid.cpp for  in /home/baptiste/rendu/piscine_cpp_d08/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 14 10:31:13 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 18:54:07 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "droid.hh"

Droid::Droid(std::string id) : Energy(50), Attack(25), Toughness(15), Status(new std::string("Standing by")), BattleData(new DroidMemory())
{
  this->Id = id;

  std::cout  << "Droid '" << id << "' Activated" << std::endl;
}

Droid::Droid(const Droid & obj) :  Id(obj.Id), Energy(obj.Energy), Attack(obj.Attack), Toughness(obj.Toughness), Status(obj.Status), BattleData(obj.BattleData)
{
  std::cout << "Droid '" << this->Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
  std::cout << "Droid '"<< this->Id << "'Destroyed" << std::endl;
}

void Droid::setStatus(std::string *stat)
{
  this->Status = stat;
}

void Droid::setId(std::string niouId)
{
  this->Id = niouId;
}

std::string  Droid::getId() const
{
  return (this->Id);
}

std::string Droid::getStatus() const
{
  return (*this->Status);
}

size_t Droid::getEnergy() const
{
  return (this->Energy);
}

void Droid::setBattleData(DroidMemory *niouData)
{
  this->BattleData = niouData;
}

DroidMemory *Droid::getBattleData() const
{
  return this->BattleData;
}

std::ostream& operator<<(std::ostream & os, Droid const & dd)
{
  os << "Droid '" << dd.getId() << "', "  << dd.getStatus() << ", " << dd.getEnergy() ;
  return (os);
}

Droid & Droid::operator<<(size_t &en)
{

  this->Energy = this->Energy + en;
  if (this->Energy > 100)
    {
      en = this->Energy - 100;
      this->Energy = 100;
    }
  return (*this);
}

Droid& Droid::operator=(Droid const &dd)
{
  this->Id = dd.Id;
  this->Energy = dd.Energy;
  this->Status = dd.Status;
  this->BattleData = dd.BattleData;
  return (*this);
}

bool Droid::operator==(Droid const &dd)
{
  if (this->Status == dd.Status)
    return (true);
  else
    return (false);
}

bool Droid::operator!=(Droid const &dd)
{
  if (this->Status == dd.Status)
    return (false);
  else
    return (true);

}

