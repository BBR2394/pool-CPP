//
// Parser.cpp for  in /home/baptiste/rendu/piscine_cpp_d16/newex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Jan 21 21:51:12 2015 Bertrand-Rapello Baptiste
// Last update Thu Jan 22 19:33:15 2015 Bertrand-Rapello Baptiste
//

#include <cstdlib>
#include "Parser.h"

Parser::Parser()
{
  _result = 0;
  _finalresult = 0;
}

Parser::~Parser()
{
}

void Parser::work()
{
  int	nb2 = _numbers.top();
  _numbers.pop();
  int	nb1 = _numbers.top();
  _numbers.pop();

  //std::cout << "dans work " << nb1 << " " << nb2 << " " << _operators.top() << std::endl;
  if (_operators.top() == "+")
    _result = (nb1 + nb2) ;
  else if (_operators.top() == "-")
    _result= (nb1 - nb2);
  else if (_operators.top() == "*")
    _result= (nb1 * nb2);
  else if (_operators.top() == "/")
    _result= (nb1 / nb2);
  else if (_operators.top() == "%")
    _result= (nb1 % nb2);
  _numbers.push(_result);
  _operators.pop();

}

void Parser::feed(std::string operation)
{
  static int c = 0;
  int	d = 0;
  int	d2 = 0;
  std::string temp1;
  std::string temp2;

  int	res;

  if (c == 0 && operation[c+1] == '(')
    c += 1;
  if (operation[c] == '(')
    {
      c += 1;
      feed(operation.substr(c));
      //std::cout << "apres une premiere recursive " << operation[c] << "||" << std::endl;
      d = c;
      if (operation[d] == ' ')
        {
	  //std::cout << " un espace !!" << std::endl;
          c++;
          d++;
        }
    }
  else 
    d = c;
  //std::cout << "mouai mouai " << operation[c] << "LL" << c << "MM" << d << "OO" << std::endl;
  while (operation[d] != '*' && operation[d] != '+' && operation[d] != '/' && operation[d] !=  '-' && operation[d] !=  '%')
    {
      c++;
      d++;
      if (operation[d] == ' ')
	{
	  //std::cout << " un espace !!" << std::endl;
	  c++;
	  d++;
	}
    }
  //std::cout << "mouai mouai " << operation[c] << "LL" << c << "MM" << d << "OO" << std::endl;
  temp1 = operation.substr(0, d);
  res = atoi(temp1.c_str());
  //std::cout << operation << "&&" << temp1  << "//" << c << "/" << d << "le resultat qui doit etre different de zero " << res << std::endl;
  if (res == 0)
    _numbers.push(_result);
  else
    _numbers.push(res);
  //std::cout << "le res  " << res << std::endl;
  _operators.push(operation.substr(d, 1));
  d++;
  c++;
  if (operation[d] == ' ')
    {
      //std::cout << " un espace !!" << std::endl;
      c++;
      d++;
    }
  while (operation[d] != ')' && d < (int)operation.size())
    {
      c++;
      d++;
      d2++;
    }
  temp2 = operation.substr(d-d2, d2);
  res = atoi(temp2.c_str());
  //std::cout << operation << "&2&" << temp2  << "//" << c << "/" << d2 << "le resultat " << res << std::endl;
  _numbers.push(res);
  this->work();
  //std::cout << "le resultat est " << _result << " et j'en suis a " << operation[d] <<std::endl;
  c += 3;
  if (c > (int)operation.size())
    {
      //std::cout << "RESET du C" << std::endl;
      c = 0;
      _finalresult = _result + _finalresult;
      _result = 0;
    }
}

int Parser::result() const
{
  return this->_finalresult;
}

void Parser::reset()
{
  _finalresult = 0;
}
