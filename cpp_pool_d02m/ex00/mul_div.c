/*
** mul_div.c for  in /home/bertra_l/rendu/piscine_cpp_d02m/ex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  9 09:58:03 2014 Bertrand-Rapello Baptiste
** Last update Thu Jan  9 14:05:25 2014 Bertrand-Rapello Baptiste
*/

void	add_mul_4param(int first, int second, int *add, int *mul)
{
  *add = first + second;
  *mul = first * second;
}

void	add_mul_2param(int *first, int *second)
{
  int	addres;
  int	mulres;

  addres = *first + *second;
  mulres = *first * *second;
  *first = addres;
  *second = mulres;
}
