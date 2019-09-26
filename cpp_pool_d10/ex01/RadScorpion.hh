//
// SuperMutant.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:49:36 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 16:01:53 2015 Bertrand-Rapello Baptiste
//

#ifndef RADSCORPION_HH_
# define RADSCORPION_HH_

#include "AEnemy.hh"

class RadScorpion : public AEnemy
{
public:
  RadScorpion();
  ~RadScorpion();

  void takeDamage(int);

};

#endif
