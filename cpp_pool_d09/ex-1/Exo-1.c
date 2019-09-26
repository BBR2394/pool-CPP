/*
** Exo-1.c for  in /home/baptiste/rendu/piscine_cpp_d09/ex-1
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan 15 11:21:33 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 15 12:14:29 2015 Bertrand-Rapello Baptiste
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Exo-1.h"

static void CthulhuInitializer(t_cthulhu* this)
{
  this->m_name = "Cthulhu";
  this->m_power = 42;
  printf("Building Cthulhu\n");
}

t_cthulhu *NewCthulhu()
{
  t_cthulhu *strc;

  printf("----\n");
  strc = malloc(sizeof(t_cthulhu));
  if (strc == NULL)
    return (NULL);
  CthulhuInitializer(strc);
  return (strc);
}

void PrintPower(t_cthulhu *this)
{
  printf("Power => %d\n", this->m_power);
}

void Attack(t_cthulhu* this)
{
  if (this->m_power >= 42)
    {
      this->m_power = this->m_power -42;
      printf("%s attacks and destroys the city\n", this->m_name);
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void Sleeping(t_cthulhu* this)
{
  this->m_power =this->m_power  + 42000;
  printf("%s sleeps\n", this->m_name);
}

static void KoalaInitializer(t_koala* this, char *name, char _isALegend)
{
  this->m_isALegend = _isALegend;
  CthulhuInitializer(&this->m_parent);
  this->m_parent.m_name = strdup(name);
  if (_isALegend == 1)
    {
      printf("Building Legend\n");
    }
  else if (_isALegend == 0)
    {
      this->m_parent.m_power = 0;
      printf("Building NotLegend\n");
    }
  else
    printf("Building \n");


}

t_koala* NewKoala(char *name, char _isALegend)
{
  t_koala *strc;

  printf("----\n");
  strc = malloc(sizeof(t_koala));
  if (strc == NULL)
    return (NULL);
  KoalaInitializer(strc, name, _isALegend);
  return (strc);
}

void Eat(t_koala *this)
{
  printf("%s eats\n", this->m_parent.m_name);
  this->m_parent.m_power = this->m_parent.m_power + 42;
}
