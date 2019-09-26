//
// ex02.hpp for  in /home/baptiste/rendu/piscine_cpp_d15
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 21 11:10:41 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 11:10:42 2015 Bertrand-Rapello Baptiste
//


#ifndef EX02_HPP_
# define EX02_HPP_

template<typename T>
T min(T a, T b)
{
  std::cout << "template min" << std::endl;
  if (a < b)
    return a;
  else if (b < a)
    return b;
  else if (a == b)
    return a;
  return a;
}

template<typename T>
T templateMin(T *tab, int a)
{
  int c;
  double	nbm;

  c = 1;
  nbm = tab[0];
  while (c < a)
    {
      nbm = ::min(tab[c-1], tab[c]);
      c++;
    }
  return nbm;
}

int min(int a, int b)
{
  std::cout << "non-template min" << std::endl;
  if (a < b)
    return a;
  else if (b < a)
    return b;
  else if (a == b)
    return a;
  return a;
}

int nonTemplateMin(int *tab, int size)
{

  int c;
  int nbmin;

  c = 1;
  nbmin = tab[0];
  while (c < size)
    {
      nbmin = min(tab[c-1], tab[c]);  
      c++;
    }
  return nbmin;
}



#endif
