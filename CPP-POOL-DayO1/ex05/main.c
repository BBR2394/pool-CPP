/*
** main.c for  in /home/bertra_l/rendu/piscine_cpp_d01/ex05
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan  8 17:58:16 2014 Bertrand-Rapello Baptiste
** Last update Wed Jan  8 21:14:56 2014 Bertrand-Rapello Baptiste
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  int	**map;
  int	c;

  c = 0;
  map = malloc(6*sizeof(int *));
  while (c < 6)
    map[c++] = malloc(5*sizeof(int));

  map[0][0] = 0;
  map[1][0] = 7;
  map[1][1] = 4;
  map[2][0] = 2;
  map[2][1] = 3;
  map[2][2] = 6;
  map[3][0] = 8;
  map[3][1] = 5;
  map[3][2] = 9;
  map[3][3] = 3;

  printf("%d %d %d \n", map[0][0], map[1][0], map[1][1]);

  pyramid(4, map);

}
