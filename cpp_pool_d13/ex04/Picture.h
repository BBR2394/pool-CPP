/*
** Picture.h for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Jan 19 10:40:57 2015 Bertrand-Rapello Baptiste
** Last update Mon Jan 19 14:00:14 2015 Bertrand-Rapello Baptiste
*/


#ifndef PICTURE_H_
# define PICTURE_H_

#include        <fstream>
#include        <iostream>
#include        <iomanip>
#include        <string>

class Picture
{
 public:
  Picture();
  Picture(Picture const &);
  Picture(const std::string & file);
  ~Picture();
  Picture & operator=(Picture const & pict);

 private:
  std::string _data;

 public:
  bool getPictureFromFile(const std::string &file);
  void erase();
  std::string getData() const;
  void setData(std::string);
};

#endif
