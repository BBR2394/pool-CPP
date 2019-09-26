//
// Warrior.hh for  in /home/baptiste/rendu/piscine_cpp_d09/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 14:46:11 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 16:15:46 2015 Bertrand-Rapello Baptiste
//

#ifndef WARRIOR_HH_
# define WARRIOR_HH_

#include "Character.hh"

class Warrior : public Character
{
public:
  Warrior(const std::string &, int );
  ~Warrior();

private:
  std::string _weap;

public:
  int CloseAttack();
  int RangeAttack();
  std::string getWeapon() const;
  void setWeapon(std::string w);
};

#endif
