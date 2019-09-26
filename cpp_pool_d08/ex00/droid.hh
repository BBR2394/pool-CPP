//
// droid.hh for  in /home/baptiste/rendu/piscine_cpp_d08/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 14 10:28:14 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 17:40:53 2015 Bertrand-Rapello Baptiste
//

#ifndef DROID_HH_
# define DROID_HH_

#include <iostream>
#include <string>

class Droid
{
public:
  Droid();
  Droid(std::string);
  Droid(const Droid &);
  ~Droid();

private:
  std::string Id;
  size_t Energy;
  const size_t Attack;
  const size_t Toughness;
  std::string *Status;

public:
  void setStatus(std::string *stat);
  void setId(std::string niouId);
  void setEnergy(size_t en);
  std::string getId() const;
  std::string getStatus() const;
  size_t getEnergy() const;
  size_t getAttack() const;
  size_t getToughness() const;

  Droid& operator<<(size_t &en);
  Droid& operator=(Droid const &dd);
  bool operator==(Droid const &dd) const;
  bool operator!=(Droid const &dd) const;

};

std::ostream& operator<<(std::ostream&, Droid const &);


#endif
