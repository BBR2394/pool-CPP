/*
** Ratatouille.h for  in /home/baptiste/rendu/piscine_cpp_d16/ex04
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan 22 15:01:16 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 22 15:31:44 2015 Bertrand-Rapello Baptiste
*/


#ifndef RATATOUILLE_H_
# define RATATOUILLE_H_

#include <iostream>

class Ratatouille
{
public:
  Ratatouille();
  Ratatouille(Ratatouille const &);
  ~Ratatouille();
  Ratatouille &operator=(const Ratatouille &);

  Ratatouille &addVegetable(unsigned char);
  Ratatouille &addCondiment(unsigned int);
  Ratatouille &addSpice(double);
  Ratatouille &addSauce(const std::string &);

  std::string kooc();

  std::string marmitte;

};

#endif
