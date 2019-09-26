/*
** DomesticKoala.h for  in /home/baptiste/rendu/piscine_cpp_d16/ex01
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan 22 14:23:52 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 22 14:42:33 2015 Bertrand-Rapello Baptiste
*/

#ifndef DOMESTICKOALA_H_
# define DOMESTICKOALA_H_

class DomesticKoala
{
 public:
  DomesticKoala(KoalaAction&);
  ~DomesticKoala();
  //DomesticKoala(const DomesticKoala&);
  //DomesticKoala& operator=(const DomesticKoala&);
 private:
  std::vector<methodPointer_t> const * getActions(void) const;
  void learnAction(unsigned char, methodPointer_t);
  void unlearnAction(unsigned char);
  void doAction(unsigned char, const std::string&);
  void setKoalaAction(KoalaAction&);


};

#endif
