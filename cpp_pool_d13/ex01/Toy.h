/*
** Toy.h for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Jan 19 10:27:25 2015 Bertrand-Rapello Baptiste
** Last update Mon Jan 19 11:24:13 2015 Bertrand-Rapello Baptiste
*/


#ifndef TOY_H_
# define TOY_H_

#include        <iostream>
#include        <string>

#include "Picture.h"

class Toy
{
 public:
  enum ToyType
  {
    BASIC_TOY,
    ALIEN
  };
  
 public:
  Toy();
  Toy(Toy const & );
  Toy(ToyType tpe, std::string name,std::string pictName);
  ~Toy();
  Toy & operator=(Toy const & );
 
 private:
  ToyType _type;
  std::string _name;
  Picture *_pict;


 public:
  ToyType getType() const;
  std::string getName() const;
  //Picture getPicture() const;
  bool setAscii(std::string );
  void setName(std::string name);
  std::string getAscii() const;



};

#endif
