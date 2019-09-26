//
// Character.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 15:25:01 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 15:59:06 2015 Bertrand-Rapello Baptiste
//

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

#include <iostream>
#include "AWeapon.hh"
#include "AEnemy.hh"

class Character
{

public:
  Character(std::string const &name);
  ~Character();

private:
  std::string _name;
  int _ap;
  AWeapon * _weap;
  //AEnemy * _enemy;

public:
  void recoverAP();
  void equip(AWeapon*);
  void attack(AEnemy*);
  std::string getName() const;
  int getAP() const;
  std::string getWeaponName() const;
  AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &os, Character const &obj);

#endif
