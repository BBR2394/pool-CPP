/*
** pyramid.c for  in /home/bertra_l/rendu/piscine_cpp_d01/ex05
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  8 17:58:41 2014 Bertrand-Rapello Baptiste
** Last update Wed Jan  8 20:34:22 2014 Bertrand-Rapello Baptiste
*/


int	pyramid(int size, int **map)
{
  int	res;
  int	c;
  int	d;

  res = 0;
  c = 0;
  d = 0;
  if (size > 0)
    {
      res = res + map[c++][d];
      pyramid(size-1, map);
    }
  c--;

}

/*
int	pyramid(int size, int **map)
{
  int	x;
  int	y;
  int	res;

  x = 0;
  y = 0;
  res = 0;

  while (y < size)
    res = map[y++][0] + res;



}
*/
