//
// Priest.hh for  in /home/baptiste/rendu/piscine_cpp_d09/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 17:13:27 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 17:26:25 2015 Bertrand-Rapello Baptiste
//

#ifndef PRIEST_H_
# define PRIEST_H_

#include "Character.hh"
#include "Mage.hh"

class Priest : public Mage
{
public:
  Priest(const std::string &, int );
  ~Priest();

private:

public:
  int CloseAttack();
  void Heal();
};

#endif
