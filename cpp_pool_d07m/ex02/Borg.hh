//
// Borg.hh for  in /home/baptiste/rendu/piscine_cpp_d07m/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 13:34:48 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 14:37:46 2015 Bertrand-Rapello Baptiste
//

#ifndef BORG_H_
# define BORG_H_

#include "Warpsystem.hh"
#include "Destination.hh"

namespace Borg
{
  
  class Ship
  {
  public:
    Ship();
    ~Ship();
  private:
    int       _side;
    short     _maxWarp;
    WarpSystem::Core *_core;
    Destination _location;
    Destination _home;
  public:
    void setupCore(WarpSystem::Core *coeur);
    void checkCore();
    bool move(int warp, Destination d);
    bool move(int warp);
    bool move(Destination d);
    bool move();
  };
  

};

#endif
