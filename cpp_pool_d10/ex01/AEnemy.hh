//
// AEnemy.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 14:35:26 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 15:16:51 2015 Bertrand-Rapello Baptiste
//

#ifndef AENEMY_HH_
# define AENEMY_HH_

#include <iostream>
#include <string>

class AEnemy
{
public:
  AEnemy(int hp, std::string const & type);
  virtual ~AEnemy() {};

protected:
  int _hp;
  std::string _type;

public:
  std::string getType() const;
  int getHP() const;
  virtual void takeDamage (int);

};

#endif
