//
// ex05.hpp for  in /home/bertra_l/rendu/piscine_cpp_d15/ex05
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 22 19:27:47 2014 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 14:54:34 2015 Bertrand-Rapello Baptiste
//

#ifndef EX05_HPP_
# define EX05_HPP_

template<typename T>
class Array
{
public:
  Array()
  {
    tab = new T[0];
  }
  Array(unsigned int nb)
  {
    tab = new T[nb];
    std::cout << tab[0] <<  tab[1]<< tab[2]<< tab[3]  << std::endl;
  }
  Array(Array const &ar)
  {
    this->tab = ar.tab;
  }
  ~Array()
  {}
  Array &operator=(Array const &obj)
  {
    this->tab = obj.tab;
  }

private:
  T *tab;

public:
  T getTab() const
  {
    return *tab;
  }

  T &operator[](unsigned int &nb)
  {
    std::cout << "c'est quell nombre ??" <<nb << std::endl;  
  }

};

#endif
