//
// SuperMutant.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:49:36 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 16:02:02 2015 Bertrand-Rapello Baptiste
//

#ifndef SUPERMUTANT_HH_
# define SUPERMUTANT_HH_

#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
public:
  SuperMutant();
  ~SuperMutant();

  void takeDamage(int);

};

#endif
