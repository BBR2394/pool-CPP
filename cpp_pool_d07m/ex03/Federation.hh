//
// Federation.hh for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 10:32:18 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 14 01:08:46 2015 Bertrand-Rapello Baptiste
//

#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <iostream>
#include "Warpsystem.hh"
#include "Destination.hh"
#include "Borg.hh"

/*
namespace Borg
{
  class Ship;
};
*/
namespace Federation
{ 
  namespace Starfleet
  {

    class Captain
    {
    public:
      Captain(std::string name);
      ~Captain();
    private:
      std::string _name;
      int _age;
    public:
      std::string getName() const;
      int getAge();
      void setAge(int );
    };    

    class Ensign
    {
    public:
      Ensign(std::string name);
      ~Ensign();
    private:
      std::string _name;
    public:

    };
    
    class Ship
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp, int torpedo);
      Ship();
      ~Ship();
    private:      
      int	_length;
      int	_width;
      std::string	_name;
      short	_maxWarp;
      WarpSystem::Core *_core;
      Captain *_capi;
      Destination _location;
      Destination _home;
      int _shield;
      int _photonTorpedo;
    public:
      bool move(int warp, Destination d);
      bool move(int warp);
      bool move(Destination d);
      bool move();
      void setupCore(WarpSystem::Core *coeur);
      void checkCore();
      void promote(Captain*);
      int getShield();
      void setShield(int);
      int getTorpedo();
      void setTorpedo(int);
      void fire(Borg::Ship*);
      void fire(int torpedoes, Borg::Ship*);
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
      Destination _location;
      Destination _home;
      int _shield;
      int _photonTorpedo;
    public:
      bool move(int warp, Destination d);
      bool move(int warp);
      bool move(Destination d);
      bool move();
      void setupCore(WarpSystem::Core *coeur);
      void checkCore();
      WarpSystem::Core *getCore();
      int getShield();
      void setShield(int);
      int getTorpedo();
      void setTorpedo(int);
    };
};

#endif
