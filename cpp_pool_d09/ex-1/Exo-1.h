/*
** Exo-1.h for  in /home/baptiste/rendu/piscine_cpp_d09/ex-1
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan 15 11:20:53 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 15 11:57:05 2015 Bertrand-Rapello Baptiste
*/

#ifndef EXO_1_H_
# define EXO_1_H_

typedef struct s_cthulhu
{
  int m_power;
  char *m_name;
}	t_cthulhu;

typedef struct s_koala
{
  t_cthulhu m_parent;
  char m_isALegend;
} t_koala;


t_koala* NewKoala(char *name, char _isALegend);
void Eat(t_koala *this);
t_cthulhu *NewCthulhu();
void PrintPower(t_cthulhu *this);
void Attack(t_cthulhu* this);
void Sleeping(t_cthulhu* this);




#endif
