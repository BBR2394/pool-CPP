/*
** Toy.h for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Jan 19 10:27:25 2015 Bertrand-Rapello Baptiste
** Last update Mon Jan 19 16:24:24 2015 Bertrand-Rapello Baptiste
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
    ALIEN,
    BUZZ,
    WOODY
  };
  
 public:
  Toy();
  Toy(Toy const & );
  Toy(ToyType tpe, std::string name,std::string pictName);
  ~Toy();
  Toy & operator=(Toy const & );

  class Error
  {
  public:
    enum ErrorType
    {
      UNKNOWN,
      PICTURE,
      SPEAK
    };
    Error();
    Error(ErrorType);
    ~Error();
    std::string what() const;
    std::string where() const;
    ErrorType getType() const;
    void setLastError(ErrorType tpe);
    ErrorType type;

  private:
    std::string errorWhat;
    std::string errorWhere;
  };
  
 protected:
  ToyType _type;
  std::string _name;
  Picture *_pict;
  Error _error;
  Error::ErrorType _typeerr;

 public:
  ToyType getType() const;
  std::string getName() const;
  //Picture getPicture() const;
  bool setAscii(std::string );
  void setName(std::string name);
  std::string getAscii() const;
  virtual void speak(std::string blabla);
  void setData(std::string nioudata);
  virtual bool speak_es(std::string);
  Error getLastError() const;

  Toy &operator<<(std::string const &str);

};

std::ostream & operator<<(std::ostream &os, Toy const &obj);


#endif
