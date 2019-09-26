/*
** Skat.h for  in /home/baptiste/rendu/piscine_cpp_d07a/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 13 16:59:05 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 13 18:19:24 2015 Bertrand-Rapello Baptiste
*/

#ifndef SKAT_H_
# define SKAT_H_

#include <iostream>
#include <string>

class Skat
{
 public:
  Skat(std::string const &name, int nb);
  Skat();
  ~Skat();

  std::string _name;
  int stimPaks;
  void useStimPaks();
  const std::string &name();
  void status();
  void shareStimpaks(int number, void *stock);
  void addStimpaks(unsigned int number);

};

#endif
