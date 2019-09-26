//
// Cesar.cpp for  in /home/baptiste/rendu/piscine_cpp_d17/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 23 11:34:30 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 23 14:02:48 2015 Bertrand-Rapello Baptiste
//

#include "Cesar.h"

Cesar::Cesar()
{
  _decal = 3;
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
  if ((plainchar >= 'a' && plainchar <= 'z'))
    {
      plainchar += _decal;
      if (plainchar > 'z' || plainchar < 'A')
	{
	  plainchar -= 26;
	}
    }
  else if (plainchar >= 'A' && plainchar <= 'Z')
    {
      plainchar += _decal;
      if (plainchar > 'Z')
	{
	  plainchar -= 26;
	}
    }
  std::cout << plainchar ;
  _decal += 1;
  if (_decal > 26)
    _decal = 1;
}

void Cesar::decryptChar(char cipherchar)
{
  if ((cipherchar >= 'a' && cipherchar <= 'z'))
    {
      cipherchar -= _decal;
      if (cipherchar  < 'a')
	cipherchar += 26;
    }
  else if (cipherchar >= 'A' && cipherchar <= 'Z')
    {
      cipherchar -= _decal;
      if (cipherchar < 'A')
	cipherchar += 26;
    }
  std::cout << cipherchar;
  _decal += 1;
  if (_decal > 26)
    _decal = 1;

}

void Cesar::reset()
{
  _decal = 3;
}
