//
// PlasmaRifle.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:01:10 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 16:02:10 2015 Bertrand-Rapello Baptiste
//

#ifndef PLASMARIFLE_HH_
#define PLASMARIFLE_HH_

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle();
  ~PlasmaRifle();

  void attack() const;
};

#endif
