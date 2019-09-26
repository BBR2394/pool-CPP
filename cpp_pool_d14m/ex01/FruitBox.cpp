//
// FruitBox.cpp for  in /home/baptiste/rendu/piscine_cpp_d14m/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 11:43:11 2015 Bertrand-Rapello Baptiste
// Last update Wed Jan 21 09:02:31 2015 Bertrand-Rapello Baptiste
//

#include "Fruit.h"
#include "FruitBox.h"

FruitBox::FruitBox(int nb) : _nbFruit(nb)
{
  int	c = 0;
  FruitNode *tmp;

  this->head = NULL;
  this->tail = NULL;
  while (c < nb)
    {
      tmp = new FruitNode();
      if (c == 0)
	this->tail = tmp;
      tmp->next = this->head;
      tmp->link = NULL;
      tmp->nb = c;
      this->head = tmp;
      c++;
    }
}

FruitBox::~FruitBox()
{}

FruitNode::FruitNode() : next(NULL), link(NULL)
{
}

FruitNode::~FruitNode()
{}

int FruitBox::nbFruits() const
{
  return _curFruitInBox;
}

void FruitBox::checkBox()
{
  int c = 0;
  FruitNode *tmp;

  tmp = this->head;
  while (c < _nbFruit)
    {
      std::cout << "le nb du fruit node " << tmp->nb;
      if (tmp->link != NULL)
	std::cout << " et le nom " << tmp->link->getName();
      std::cout << std::endl;
      tmp = tmp->next;
      c++;
    }
}

bool FruitBox::putFruit(Fruit *f)
{
  FruitNode *tmp = this->head;
  while (tmp->link != NULL)
    {
      if (tmp->link == f)
	return (false);
      tmp = tmp->next;
      if (tmp == NULL)
	return false;
    }
  if (tmp != NULL)
    {
      tmp->link = f;
      this->_curFruitInBox += 1;
      return true;
    }
  else
    return false;

}

FruitNode *FruitBox::Head()
{
  if (this->head == NULL)
    return NULL;
  else
    return this->head;
}

Fruit *FruitBox::pickFruit()
{
  FruitNode *tmp = this->head;
  Fruit *rtr = NULL;

  while (tmp->link != NULL)
    {
      tmp = tmp->next;
      if (tmp == NULL)
	return NULL;
    }
  this->_curFruitInBox -= 1;
  tmp->link = rtr;
  tmp->link = NULL;
  return rtr;
}
