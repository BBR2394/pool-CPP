//
// Picture.cpp for  in /home/baptiste/rendu/piscine_cpp_d13/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Jan 19 10:40:50 2015 Bertrand-Rapello Baptiste
// Last update Mon Jan 19 11:23:34 2015 Bertrand-Rapello Baptiste
//

#include "Picture.h"

Picture::Picture()
{
  _data = "";
}

Picture::Picture(const std::string & file)
{
  if (getPictureFromFile(file) == false)
    _data = "ERROR";
}

Picture::Picture(Picture const & pict) : _data(pict._data)
{
}

Picture::~Picture()
{

}

void Picture::erase()
{
  _data = "";
}

bool Picture::getPictureFromFile(const std::string& file)
{
  std::string pict;
  std::string line;
  std::ifstream myfile;

  myfile.open(file.c_str());
  if (myfile.is_open() == false)
    return false;

  while (getline(myfile, line))
    {
      pict += line;
      pict += '\n';
    }
  this->_data = pict;
  return (true);
}

std::string Picture::getData() const
{
  return _data;
}

Picture & Picture::operator=(Picture const & pict)
{
  this->_data = pict.getData();
  return (*this);
}
