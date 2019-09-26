/*
** castamnia.c for  in /home/baptiste/rendu/piscine_cpp_d02m/ex04
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Thu Jan  8 12:06:19 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan  8 15:30:36 2015 Bertrand-Rapello Baptiste
*/

#include <stdlib.h>
#include <stdio.h>
#include "castmania.h"

void my_print_int(int *data)
{
  printf("%d\n", *data);
}

void my_print_float(float *data)
{
  printf("%f\n", *data);
}

void printadd(t_add *ope)
{
  printf("%d\n", ope->add_op.res);
}

void printdivint(t_integer_op *ope)
{
  printf("%d\n", ope->res);
}

void printdivfloat(t_decimale_op *ope)
{
  printf("%f\n", ope->res);
}

void printdiv(t_div *ope)
{
  if (ope->div_type == INTEGER)
    printdivint(ope->div_op);
  else if (ope->div_type == DECIMALE)
    printdivfloat(ope->div_op);
}

void preexec_div(t_instruction *data)
{
  exec_div(data->operation);
  if (data->output_type== VERBOSE)
    printdiv(data->operation);
}

void preexec_add(t_instruction *data)
{
  exec_add(data->operation);
  if (data->output_type == VERBOSE)
    printadd(data->operation);
}

void exec_operation(t_instruction_type instruction_type, void *data)
{
  if (instruction_type == ADD_OPERATION)
    preexec_add(data);
  else if (instruction_type == DIV_OPERATION)
    preexec_div(data);

}

void exec_instruction(t_instruction_type instruction_type, void *data)
{
  if (instruction_type == PRINT_INT)
    my_print_int(data);
  else if (instruction_type == PRINT_FLOAT)
    my_print_float(data);
  else
    exec_operation(instruction_type, data);

}
