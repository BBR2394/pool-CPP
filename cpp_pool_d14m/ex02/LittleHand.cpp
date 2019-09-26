//
// LittleHand.cpp for  in /home/baptiste/rendu/piscine_cpp_d14m/ex01
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 22:46:14 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 20 23:25:46 2015 Bertrand-Rapello Baptiste
//

#include "LittleHand.h"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}



void LittleHand::sortFruitBox(FruitBox & unsorted, FruitBox & lemons, FruitBox & bananas, FruitBox & limes)
{
  FruitNode *tmp = unsorted.Head();

  while (tmp->_next != NULL)
    {
      if (tmp->link != NULL)
	{
	  if (tmp->link->getName() == "Lemon")
	    {
	      lemons.putFruit(tmp->link);
	      tmp->link = NULL;
	    }
	  else if (tmp->link->getName() == "Banana")
	    {
	      bananas.putFruit(tmp->link);
	      tmp->link = NULL;
            }
	  else if (tmp->link->getName() == "Lime")
	    {
	      limes.putFruit(tmp->link);
	      tmp->link = NULL;
            }
	  else
	    {
	    }
	}
      tmp = tmp->_next;
    }

}
