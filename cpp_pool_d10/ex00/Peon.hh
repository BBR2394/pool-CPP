//
// Peon.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 12:00:09 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 12:14:29 2015 Bertrand-Rapello Baptiste
//

#ifndef PEON_HH_
# define PEON_HH_

#include "Victim.hh"

class Peon : public Victim
{
public:
  Peon(std::string name);
  ~Peon();
  void getPolymorphed() const;

};

//std::ostream &operator<<(std::ostream &os, Peon const&pe);

#endif
