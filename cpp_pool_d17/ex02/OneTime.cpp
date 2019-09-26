//
// OneTime.cpp for  in /home/baptiste/rendu/piscine_cpp_d17/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Jan 23 14:20:17 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 23 19:48:08 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "OneTime.h"

OneTime::OneTime(std::string const & key) : _clef(key)
{
  _decal = 0;
}

OneTime::~OneTime()
{
}

static int mod(int x, int m) 
{
  return (x%m + m)%m;
}

void OneTime::encryptChar(char plainchar)
{
  int	tmp = (int)plainchar;
  int tmp2 = _clef[_decal];

  if ((char)tmp2 >= 'A' && (char)tmp2 <= 'Z')
    tmp2 -= 65;
  else if ((char)tmp2 >= 'a' && (char)tmp2 <= 'z')
    tmp2 -= 97;
  if (plainchar >= 'A' && plainchar <= 'Z')
    {
      tmp -= 65;
      tmp += (tmp2%26);
      tmp %= 26;
      tmp += 65;
      std::cout << (char)tmp;
    }
  else if (plainchar >= 'a' && plainchar <= 'z')
    {
      tmp -= 97;
      tmp += (tmp2%26);
      tmp %= 26;
      tmp += 97;
      std::cout << (char)tmp ;
    }
  else
    std::cout << plainchar ;
  _decal++;
  if (_clef[_decal] == '\0')
    _decal = 0;
}


void OneTime::decryptChar(char cipherchar)
{
  //std::cout << cipherchar;
  int   tmp = (int)cipherchar;
  int tmp2 = _clef[_decal];

  if ((char)tmp2 >= 'A' && (char)tmp2 <= 'Z')
    tmp2 -= 65;
  else if ((char)tmp2 >= 'a' && (char)tmp2 <= 'z')
    tmp2 -= 97;
  //std::cout << tmp2 << cipherchar;
  if (cipherchar >= 'A' && cipherchar <= 'Z')
    {
      //std::cout << "$" << tmp;
      tmp -= 65;
      tmp -= mod(tmp2, 26);
      //std::cout << "|" << tmp << "|";
      tmp = mod(tmp, 26);
      ///std::cout << "|" << tmp << "|";
      tmp += 65;
      std::cout << (char)tmp;
    }
  else if (cipherchar >= 'a' && cipherchar <= 'z')
    {
      //std::cout << "//" << tmp;
      tmp -= 97;
      tmp -= mod(tmp2, 26);
      tmp  = mod(tmp, 26);
      tmp += 97;
      std::cout << (char)tmp ;
    }
  else
    std::cout << cipherchar ;
  _decal++;
  if (_clef[_decal] == '\0')
    _decal = 0;
  //std::cout << std::endl;
}

void OneTime::reset()
{
  _decal = 0;
}
