//
// Character.hh for  in /home/baptiste/rendu/piscine_cpp_d09/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 12:16:57 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 15:23:24 2015 Bertrand-Rapello Baptiste
//

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

#include <iostream>
#include <string>

class Character
{
public:
  Character(const std::string &, int );
  ~Character();

enum AttackRange
  {
    CLOSE,
    RANGE
  };

protected:
  std::string _name;
  std::string _class;
  int _lvl;
  int _pv;
  int _power;
  std::string _race;
  int _Stamina;
  int _Spirit;
  int _Intelligence;
  int _Agility;
  int _dmg; //Strenght

public:
  AttackRange Range;
  int getLvl() const;
  int getPv() const;
  int getPower() const;
  std::string getClass() const;
  const std::string getName() const;
  std::string getRace() const;
  void setClass(std::string);
  void setRace(std::string);
  int CloseAttack();
  int RangeAttack();
  void RestorePower();
  void Heal();
  void TakeDamage(int );
};

#endif
