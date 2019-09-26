//
// PowerFist.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:25:38 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 16:02:28 2015 Bertrand-Rapello Baptiste
//

#ifndef POWERFIST_HH_
# define POWERFIST_HH_

#include "AWeapon.hh"

class PowerFist : public AWeapon
{
public:
  PowerFist();
  ~PowerFist();

  void attack() const;
};

#endif
