/*
** func_ptr.h for  in /home/baptiste/rendu/piscine_cpp_d02m/ex03
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 10:14:19 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 11:13:39 2015 Bertrand-Rapello Baptiste
*/

#ifndef FUNC_PTR_H_
# define FUNC_PTR_H_

typedef enum    e_action
  {
    PRINT_NORMAL,
    PRINT_REVERSE,
    PRINT_UPPER,
    PRINT_42
  }             t_action;


void    do_action(t_action action, char *str);


#endif
