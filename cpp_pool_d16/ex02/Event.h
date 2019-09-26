/*
** Event.h for  in /home/baptiste/rendu/piscine_cpp_d16/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan 22 15:35:52 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 22 16:47:36 2015 Bertrand-Rapello Baptiste
*/

#ifndef EVENT_H_
# define EVENT_H_

#include <iostream>

class Event
{
 public:
  Event(void);
  Event(unsigned int, const std::string&);
  ~Event(void);
  Event(const Event&);
  //Event& operator=(const Event&);

  unsigned int getTime(void) const;
  const std::string& getEvent(void) const;
  void setTime(unsigned int);
  void setEvent(const std::string&);

 private:
  int time;
  std::string theEvent;

};

#endif
