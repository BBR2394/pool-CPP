//
// Victim.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 11:17:33 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 12:10:37 2015 Bertrand-Rapello Baptiste
//

#ifndef VICTIM_HH_
# define VICTIM_HH_

#include <iostream>
#include <string>

class Victim
{
public:
  Victim(std::string name);
  ~Victim();

protected:
  std::string _name;

public:
  std::string getName() const;
  virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Victim const&vic);

#endif
