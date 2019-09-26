//
// droid.hh for  in /home/baptiste/rendu/piscine_cpp_d08/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 14 10:28:14 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 18:54:47 2015 Bertrand-Rapello Baptiste
//

#ifndef DROID_HH_
# define DROID_HH_

#include <iostream>
#include <string>

#include "droidmemory.hh"

class Droid
{
public:
  Droid(std::string);
  Droid(const Droid &);
  ~Droid();

private:
  std::string Id;
  size_t Energy;
  const size_t Attack;
  const size_t Toughness;
  std::string *Status;
  DroidMemory *BattleData;

public:
  void setStatus(std::string *stat);
  void setId(std::string niouId);
  std::string getId() const;
  std::string getStatus() const;
  size_t getEnergy() const;
  void setBattleData(DroidMemory *niouData);
  DroidMemory *getBattleData() const;


  Droid& operator<<(size_t &en);
  Droid& operator=(Droid const &dd);
  bool operator==(Droid const &dd);
  bool operator!=(Droid const &dd);

};

std::ostream& operator<<(std::ostream&, Droid const &);


#endif
