/*
** Parser.h for  in /home/baptiste/rendu/piscine_cpp_d16/newex00
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan 21 21:49:24 2015 Bertrand-Rapello Baptiste
** Last update Thu Jan 22 12:02:54 2015 Bertrand-Rapello Baptiste
*/

#ifndef PARSER_H_
# define PARSER_H_

#include <iostream>
#include <stack>

class Parser
{
 public:
  Parser();
  ~Parser();

 private:
  std::stack<int>		_numbers;
  std::stack<std::string>	_operators;
  int				_result;
  int				_finalresult;
 public:
  void feed(std::string);
  int result() const;
  void work();
  void reset();


};


#endif
