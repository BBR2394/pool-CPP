//
// Event.cpp for  in /home/baptiste/rendu/piscine_cpp_d16/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 22 16:18:38 2015 Bertrand-Rapello Baptiste
// Last update Fri Jan 23 08:55:37 2015 Bertrand-Rapello Baptiste
//

#include "Event.h"

Event::Event() : time(0), theEvent("")
{

}

Event::Event(unsigned int nb, const std::string & str) : time(nb), theEvent(str)
{

}

Event::Event(const Event & obj) : time(obj.time), theEvent(obj.theEvent)
{

}

Event::~Event()
{

}

unsigned int Event::getTime() const
{
  return time;
}
const std::string & Event::getEvent() const
{
  return theEvent;
}

void Event::setTime(unsigned int time)
{
  this->time = time;
}

void Event::setEvent(const std::string &str)
{
  this->theEvent = str;
}

