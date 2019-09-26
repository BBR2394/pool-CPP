//
// Warpsystem.hh for  in /home/baptiste/Documents/trvl piscine c++/day07pm/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 13 11:05:32 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 13 13:18:29 2015 Bertrand-Rapello Baptiste
//

#ifndef WARPSYSTEM_H_
# define WARPSYSTEM_H_

namespace WarpSystem
{
  class QuantumReactor
  {
  public:
    QuantumReactor();
    ~QuantumReactor();

  private:
    bool _stability;

  public:
    bool isStable();
    void setStability(bool);
  };
  
  class Core
  {
  public:
    Core(WarpSystem::QuantumReactor *react);
    ~Core();

    QuantumReactor *_coreReactor;
  };

};

#endif
