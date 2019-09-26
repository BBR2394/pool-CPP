//
// EventManager.cpp for  in /home/baptiste/rendu/piscine_cpp_d16/ex02
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 22 16:26:05 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 22 19:50:14 2015 Bertrand-Rapello Baptiste
//

#include "EventManager.h"

EventManager::EventManager()
{
  Ttime = 0;
}

EventManager::EventManager(EventManager const & obj)
{
  std::list<Event>::const_iterator it = obj.malist.begin();

  Ttime = 0;
  while (it != obj.malist.end())
    {
      this->malist.push_back(*it);
      it++;
    }

}

EventManager::~EventManager()
{

}

void EventManager::addEvent(const Event & obj)
{
  std::list<Event>::iterator it = malist.begin();

  if (malist.empty() == true)
    malist.push_front(obj);
  else
    {
      while (it->getTime() <= obj.getTime() && it != malist.end())
	it++;
      /*else if (obj.getTime() < malist.begin()->getTime())
	malist.push_front(obj);
	else
	malist.push_back(obj);
      */
      malist.insert(it, obj);
    }
}

void EventManager::removeEventsAt(unsigned int nb)
{
  std::list<Event>::iterator it = malist.begin();

  while (it != malist.end())
    {
      if (it->getTime() == nb)
	{
	  malist.erase(it);
	  it = malist.begin();
	}
      it++;
    }
}

void EventManager::dumpEvents() const
{
  std::list<Event>::const_iterator it = malist.begin();

  while (it != malist.end())
    {
      std::cout << it->getTime() << ": " << it->getEvent()<< std::endl;
      it++;
    }
}

void EventManager::dumpEventAt(unsigned int tm) const
{
  std::list<Event>::const_iterator it = malist.begin();

  while (it != malist.end())
    {
      if (it->getTime() == tm)
	std::cout << it->getTime() << ": " << it->getEvent()<< std::endl;
      it++;
    }

}

void EventManager::addTime(unsigned int tm)
{
  std::list<Event>::const_iterator it = malist.begin();
  //unsigned int	c = it->getTime();

  Ttime += tm;
  while (it->getTime() <= Ttime  && it != malist.end())
    {
      std::cout << it->getEvent()<< std::endl;
      it++;
      malist.pop_front();
    }
}

void EventManager::addEventList(std::list<Event>& list)
{
  std::list<Event>::iterator it = list.begin();

  while (it->getTime() < malist.begin()->getTime())
    it++;
  while (it != list.end())
    {
      addEvent(*it);
      it++;
    }
}
