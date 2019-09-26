/*
** EventManager.h for  in /home/baptiste/rendu/piscine_cpp_d16/ex02
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan 22 15:42:19 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 22 18:54:58 2015 Bertrand-Rapello Baptiste
*/

#ifndef EVENTMANAGER_H_
# define EVENTMANAGER_H_

#include <list>

#include "Event.h"

class EventManager
{
 public:
  EventManager();
  ~EventManager();
  EventManager(EventManager const &);
  EventManager& operator=(EventManager const &);

  void addEvent(const Event&);
  void removeEventsAt(unsigned int);
  void dumpEvents(void) const;
  void dumpEventAt(unsigned int) const;
  void addTime(unsigned int);
  void addEventList(std::list<Event>&);

 private:
  std::list<Event> malist;
  unsigned int Ttime;
};

#endif
