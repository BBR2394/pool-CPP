//
// Hunter.hh for  in /home/baptiste/rendu/piscine_cpp_d09/ex04
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 23:17:12 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 23:32:13 2015 Bertrand-Rapello Baptiste
//

#ifndef HUNTER_HH_
# define HUNTER_HH_

#include "Character.hh"
#include "Warrior.hh"

class Hunter : public Warrior
{
public:
  Hunter(const std::string &, int );
  ~Hunter();

public:
  int RangeAttack();
  void RestorePower();

};

#endif
