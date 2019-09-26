//
// Errors.cpp for  in /home/baptiste/rendu/piscine_cpp_d14a/ex00
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Jan 20 15:47:29 2015 Bertrand-Rapello Baptiste
// Last update Tue Jan 20 20:53:26 2015 Bertrand-Rapello Baptiste
//

#include "Errors.hpp"

NasaError::NasaError(std::string const &message) : _message(message)
{

}

NasaError::NasaError(std::string const &message,
		     std::string const &component) : _component(component), _message(message)
{}



MissionCriticalError::MissionCriticalError(std::string const &message,
					   std::string const &component) : NasaError(message, component)
{}

LifeCriticalError::LifeCriticalError(std::string const &message,
                                           std::string const &component) : NasaError(message, component)
{}


CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{
}

UserError::UserError(std::string const &message, std::string const &component) : NasaError(message, component)
{}

std::string const &NasaError::getComponent() const throw()
{
  return _component;
}
