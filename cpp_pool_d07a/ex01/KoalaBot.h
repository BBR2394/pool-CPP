/*
** KoalaBot.h for  in /home/baptiste/rendu/piscine_cpp_d07a/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 13 19:50:10 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 13 20:34:50 2015 Bertrand-Rapello Baptiste
*/

#ifndef KOALABOT_H_
# define KOALABOT_H_

#include "Parts.h"

class KoalaBot
{
 public:
  KoalaBot();
  ~KoalaBot();

 private:
  const Arms *A;
  const Legs *B;
  const Head *C;
  std::string serial;
  void (Arms::*ptrA)();
  void (Arms::*ptrB)();
  void (Arms::*ptrC)();

 public:
  void setParts(const Arms *);
  void setParts(const Legs *);
  void setParts(const Head *);
  void swapParts(const Arms *);
  void swapParts(const Legs *);
  void swapParts(const Head *);
  void informations();
  bool status();

};

#endif
