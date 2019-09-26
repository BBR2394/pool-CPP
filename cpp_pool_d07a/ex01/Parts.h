/*
** Parts.h for  in /home/baptiste/rendu/piscine_cpp_d07a/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Jan 13 18:47:21 2015 Bertrand-Rapello Baptiste
** Last update Tue Jan 13 20:24:36 2015 Bertrand-Rapello Baptiste
*/

#ifndef PARTS_H_
# define PARTS_H_

class Arms
{
 public:
  Arms(std::string serial, bool functionnal);
  Arms();
  ~Arms();

 private:
  std::string _serial;
  bool _fun;

 public:
  bool isFunctionnal()const ;
  std::string serial()const;
  void informations();

};

class Legs
{
 public:
  Legs(std::string, bool functionnal);
  Legs();
  ~Legs();

 private:
  std::string _serial;
  bool _fun;

 public:
  bool isFunctionnal() const;
  std::string serial() const;
  void informations();
};

class Head
{
 public:
  Head(std::string, bool functionnal);
  Head();
  ~Head();

 private:
  std::string _serial;
  bool _fun;

 public:
  bool isFunctionnal() const;
  std::string serial() const;
  void informations();
};

#endif
