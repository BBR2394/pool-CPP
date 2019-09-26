//
// Sorcerer.hh for  in /home/baptiste/rendu/piscine_cpp_d10/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 16 10:44:34 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 16 11:57:35 2015 Bertrand-Rapello Baptiste
//

#ifndef SORCERER_HH_
# define SORCERER_HH_

#include <iostream>
#include <string>

#include "Victim.hh"

class Sorcerer
{
public:
  Sorcerer(std::string, std::string);
  ~Sorcerer();

private:
  std::string _name;
  std::string _title;

public:
  /*void setName(std::string);
  void setTitle(std::string);*/
  std::string getName() const;
  std::string getTitle() const;
  void polymorph(Victim const &vic) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const & sor);

#endif
