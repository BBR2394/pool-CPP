//
// Federation.hh for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 10:32:18 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 11:32:43 2015 Bertrand-Rapello Baptiste
//

#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <iostream>
#include "Warpsystem.hh"

namespace Federation
{ 
  namespace Starfleet
  {
    
    class Ship
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
    private:      
      int	_length;
      int	_width;
      std::string	_name;
      short	_maxWarp;
      WarpSystem::Core *_core;
    public:
      void setupCore(WarpSystem::Core *coeur);
      void checkCore();
    };
    
  };

    class Ship
    {
    public:
      Ship(int length, int width, std::string name);
      ~Ship();
    private:
      int       _length;
      int       _width;
      std::string       _name;
      short     _maxWarp;
      WarpSystem::Core *_core;
    public:
      void setupCore(WarpSystem::Core *coeur);
      void checkCore();
    };


};

#endif
