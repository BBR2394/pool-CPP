/*
** OneTime.h for  in /home/baptiste/rendu/piscine_cpp_d17/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Jan 23 14:11:16 2015 Bertrand-Rapello Baptiste
** Last update Fri Jan 23 14:39:58 2015 Bertrand-Rapello Baptiste
*/

#ifndef ONETIME_H_
# define ONETIME_H_

#include <string>

#include "IEncryptionMethod.h"

class OneTime : public IEncryptionMethod
{
 public:
  OneTime(std::string const & );
  ~OneTime();

  void encryptChar(char plainchar);
  void decryptChar(char cipherchar);
  void reset();

 private:
  std::string _clef;
  int _decal;
};

#endif
