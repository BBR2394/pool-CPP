//
// droidmemory.hh for  in /home/baptiste/rendu/piscine_cpp_d08/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 14 11:47:43 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 18:36:57 2015 Bertrand-Rapello Baptiste
//

#ifndef DROIDMEMORY_HH_
# define DROIDMEMORY_HH_

#include <iostream>

class DroidMemory
{
public:
  DroidMemory();
  ~DroidMemory();

private:
  size_t FingerPrint;
  size_t Exp;

public:
  void setFingerPrint(size_t niouiFP);
  void setExp(size_t xp);

  size_t getFingerPrint() const;
  size_t getExp() const;

  DroidMemory& operator<<(DroidMemory const &ddmem);
  DroidMemory& operator>>(DroidMemory &ddmem);
  DroidMemory& operator+=(size_t size);
  DroidMemory& operator+=(DroidMemory const &ddmem);
};

DroidMemory& operator+(DroidMemory &ddmem1, DroidMemory &ddmem2);
DroidMemory& operator+(DroidMemory &ddmem1, size_t &nb);
DroidMemory& operator+(size_t &nb, DroidMemory &ddmem2);
std::ostream& operator<<(std::ostream&, DroidMemory const &);


#endif
