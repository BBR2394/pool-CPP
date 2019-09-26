//
// droidmemory.cpp for  in /home/baptiste/rendu/piscine_cpp_d08/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 14 11:47:14 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 18:36:57 2015 Bertrand-Rapello Baptiste
//

#include <cstdlib>
#include "droidmemory.hh"

DroidMemory::DroidMemory() : Exp(0)
{
  this->FingerPrint = random();
}

DroidMemory::~DroidMemory()
{

}

void DroidMemory::setFingerPrint(size_t niouFP)
{
  this->FingerPrint = niouFP;
}

void DroidMemory::setExp(size_t xp)
{
  this->Exp = xp;
}

size_t DroidMemory::getFingerPrint() const
{
  return (this->FingerPrint);
}

size_t DroidMemory::getExp() const
{
  return (this->Exp);
}

std::ostream& operator<<(std::ostream & os, DroidMemory const & dd)
{
  os << "DroidMemory '" << dd.getFingerPrint() << "', " << dd.getExp();
  return (os);
}


DroidMemory& DroidMemory::operator<<(DroidMemory const &ddmem)
{
  this->Exp = this->Exp + ddmem.getExp();
  this->FingerPrint = this->FingerPrint xor ddmem.getFingerPrint();
  return (*this);
}

DroidMemory& DroidMemory::operator>>(DroidMemory &ddmem)
{
  ddmem.setExp(this->Exp + ddmem.getExp());
  ddmem.setFingerPrint(ddmem.getFingerPrint() xor this->FingerPrint);
  return (ddmem);
}

DroidMemory& DroidMemory::operator+=(size_t xp)
{
  this->Exp += xp;
  this->FingerPrint = this->FingerPrint xor xp;
  return (*this);
}

DroidMemory& DroidMemory::operator+=(DroidMemory const &ddmem)
{
  this->Exp = this->Exp + ddmem.getExp();
  this->FingerPrint = this->FingerPrint xor ddmem.getFingerPrint();
  return (*this);
}

DroidMemory& operator+(DroidMemory &ddmem1, DroidMemory &ddmem2)
{
  DroidMemory *niouDM;

  niouDM = new DroidMemory();
  niouDM->setFingerPrint(ddmem1.getFingerPrint() xor ddmem2.getFingerPrint());
  niouDM->setExp(ddmem1.getExp() + ddmem2.getExp());
  return (*niouDM);
}

DroidMemory& operator+(DroidMemory &ddmem1, size_t &nb)
{
  DroidMemory *niouDM;

  niouDM = new DroidMemory();
  niouDM->setFingerPrint(ddmem1.getFingerPrint() xor nb);
  niouDM->setExp(ddmem1.getExp() + nb);
  return (*niouDM);
}

DroidMemory& operator+(size_t &nb, DroidMemory &ddmem2)
{
  DroidMemory *niouDM;

  niouDM = new DroidMemory();
  niouDM->setFingerPrint(nb xor ddmem2.getFingerPrint());
  niouDM->setExp(ddmem2.getExp() + nb);
  return (*niouDM);
}
