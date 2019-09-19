/*
** white_rabbit.c for  in /home/baptiste/rendu/piscine_cpp_d01/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  7 13:29:07 2015 Bertrand-Rapello Baptiste
** Last update Wed Jan  7 13:30:19 2015 Bertrand-Rapello Baptiste
*/

#include	<unistd.h>
#include	<stdlib.h>

int	follow_the_white_rabbit(void)
{
  int	nbr;
  int	tt;

  tt = 0;
  nbr = 0;
  while (nbr != 1 && nbr != 37 && tt <= 397)
    {
      nbr = ((random() % 37) + 1);
      tt = tt + nbr;
      if (nbr == 4 || nbr == 5 || nbr == 6 || nbr == 28 || \
          (nbr >= 17 && nbr <= 21))
        write(1, "gauche\n", 7);
      else if (nbr == 13 || (nbr >= 34 && nbr <= 36))
        write(1, "droite\n", 7);
      else if (nbr == 8 || nbr == 16 || nbr == 24 || nbr == 26 \
	       || nbr == 32)
        write(1, "derriere\n", 9);
      else if (nbr == 10 || nbr == 15 || nbr == 23)
        write(1, "devant\n", 7);
    }
  write(1, "LAPIN !!!\n", 10);
  return (tt);
}
