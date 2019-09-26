//
// main.cpp for  in /home/baptiste/rendu/piscine_cpp_d09/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jan 15 13:50:55 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 15 18:01:16 2015 Bertrand-Rapello Baptiste
//

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"
#include "Priest.hh"

int main()
{
  Character ch("Kreog", 1);
  Character go("goblin", 1);

  std::cout << "[" << ch.getName() << "] lvl " << ch.getLvl() << " enter in tek donjon" << std::endl;
  std::cout << "------------Fight---------------" << std::endl;
  std::cout << "A goblin attack at close range" << std::endl;
  ch.RangeAttack();
  std::cout << "It's at..." << std::endl;
  go.TakeDamage(10);
  ch.CloseAttack();
  go.TakeDamage(15);
  ch.TakeDamage(84);
  std::cout << "check life " << ch.getPv() << std::endl;
  ch.Heal();
  std::cout << "check life " << ch.getPv() << std::endl;
  ch.Heal();
  std::cout << "check life " << ch.getPv() << std::endl;
  std::cout << "power level " << ch.getPower() << std::endl;
  ch.RestorePower();
  std::cout << "power level " << ch.getPower() << std::endl;
  std::cout << "------------SUITE---------------" << std::endl;

  Warrior wa("Thor", 42);
  wa.RangeAttack();
  wa.CloseAttack();

  wa.TakeDamage(84);
  wa.Heal();
  wa.RestorePower();

  std::cout << "------------SUITE---------------" << std::endl;
  Mage mg("Sully", 40);

  std::cout << "------------SUITE---------------" << std::endl;
  Priest pr("Iopy", 84);

  /*
  std::cout << "Name  :" << wa.getName() << std::endl;
  std::cout << "Level :" << wa.getLvl() << std::endl;
  std::cout << "Class :" << wa.getClass() << std::endl; 
    std::cout << wa.getPv() << std::endl;
  std::cout << wa.getPower() << std::endl;


    Waaracter _c("poney", 42);

  _c.TakeDamage(50);
  _c.TakeDamage(200);
  _c.TakeDamage(200);
  */
  return 0;
}
