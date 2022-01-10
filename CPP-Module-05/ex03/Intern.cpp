#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &c)
{
	(void)c;
}

Intern::~Intern()
{
}

Form *PresidentialPardonForm(std::string name)
{
	return (new class PresidentialPardonForm(name));
}

Form *RobotomyRequestForm(std::string name)
{
	return (new class RobotomyRequestForm(name));
}

Form *ShrubberyCreationForm (std::string name)
{
	return (new class ShrubberyCreationForm(name));
}

Form* Intern::makeForm(std::string type, std::string name)
{
	std::string formType[] = {"presidential pardon",
							  "robotomy request",
							  "shrubbery creation"};
	Form *(*construtor[])(std::string) = { &PresidentialPardonForm,
											&RobotomyRequestForm,
											&ShrubberyCreationForm};
	for (unsigned int i = 0; i < sizeof(formType) / sizeof(*formType); i++)
		if (type == formType[i])
			return(construtor[i](name));
	throw(Intern::UnknownForm(type));
	return(NULL);
}
