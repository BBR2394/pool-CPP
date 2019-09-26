//
// Mage.hh for  in /home/baptiste/rendu/piscine_cpp_d09/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 16:31:19 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 20:05:05 2015 Bertrand-Rapello Baptiste
//

#ifndef MAGE_H_
# define MAGE_H_

#include "Character.hh"

class Mage : virtual public Character
{
public:
  Mage(const std::string &, int );
  ~Mage();

private:

public:
  int CloseAttack();
  int RangeAttack();
  void RestorePower();

};

#endif
