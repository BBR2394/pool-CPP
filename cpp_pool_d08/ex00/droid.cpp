//
// droid.cpp for  in /home/baptiste/rendu/piscine_cpp_d08/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 14 10:31:13 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 08:51:51 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "droid.hh"

Droid::Droid() : Id(""), Energy(50), Attack(25), Toughness(15), Status(new std::string("Standing by"))
{
  std::cout << "Droid '' Activated" << std::endl;
}

Droid::Droid(std::string id) : Energy(50), Attack(25), Toughness(15), Status(new std::string("Standing by"))
{
  this->Id = id;
  std::cout  << "Droid '" << id << "' Activated" << std::endl;
}

Droid::Droid(const Droid & obj) :  Id(obj.Id), Energy(obj.Energy), Attack(obj.Attack), Toughness(obj.Toughness), Status(obj.Status)
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

void Droid::setEnergy(size_t en)
{
  if (en > 100)
    this->Energy = 100;
  else
    this->Energy = en;
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

size_t Droid::getAttack() const
{
  return (this->Attack);
}

size_t Droid::getToughness() const
{
  return (this->Toughness);
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
  return (*this);
}

bool Droid::operator==(Droid const &dd) const
{
  if (this->Energy == dd.Energy && this->Toughness == dd.Toughness && this->Attack == dd.Attack && this->Status == dd.Status && this->Id == dd.Id)
    return (true);
  else
    return (false);
}

bool Droid::operator!=(Droid const &dd) const
{
  if (this->Energy == dd.Energy && this->Toughness == dd.Toughness && this->Attack == dd.Attack && this->Status == dd.Status && this->Id == dd.Id)
    return (false);
  else
    return (true);

}

