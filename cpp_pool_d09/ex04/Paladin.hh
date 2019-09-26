//
// Paladin.hh for  in /home/baptiste/rendu/piscine_cpp_d09/ex03
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 17:42:29 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 23:46:51 2015 Bertrand-Rapello Baptiste
//

#ifndef PALADIN_H_
# define PALADIN_H_

#include "Warrior.hh"
#include "Priest.hh"

class Paladin : public Warrior,  public Priest
{
public:
  Paladin(const std::string &, int );
  ~Paladin();

public:
  int CloseAttack();
  int RangeAttack();
  void Heal();
  void RestorePower();

  int Intercept();
};

#endif
