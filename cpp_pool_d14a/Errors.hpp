
#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <stdexcept>

class NasaError : public std::exception
{
public:
  NasaError(std::string const &message);
  NasaError(std::string const &message,
	    std::string const &component = "Unknown");
  virtual ~NasaError() throw() {} ;


  virtual std::string const &getComponent() const throw();

protected:
  std::string _component;
  std::string _message;
};

class MissionCriticalError : public NasaError
{
public:
  MissionCriticalError(std::string const &message,
		       std::string const &component = "Unknown");
};

class LifeCriticalError : public NasaError
{
public:
  LifeCriticalError(std::string const &message,
		    std::string const &component = "Unknown");
};

class UserError : public NasaError
{
public:
  UserError(std::string const &message,
	    std::string const &component = "Unknown");
};

class CommunicationError : public NasaError
{
public:
  CommunicationError(std::string const &message);
  
};

#endif
