/*
** Cesar.h for  in /home/baptiste/rendu/piscine_cpp_d17/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Jan 23 11:32:44 2015 Bertrand-Rapello Baptiste
** Last update Fri Jan 23 13:55:19 2015 Bertrand-Rapello Baptiste
*/

#ifndef CESAR_H_
# define CESAR_H_

#include <iostream>

#include "IEncryptionMethod.h"

class Cesar : public IEncryptionMethod
{
 public:
  Cesar();
  ~Cesar();

  void encryptChar(char plainchar);
  void decryptChar(char cipherchar);
  void reset();

 private:
 int _decal;

};

#endif
