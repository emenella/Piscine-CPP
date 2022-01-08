#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &c)
{
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string type, std::string name)
{
	std::string formType[] = {"presidential pardon",
							  "robotomy request",
							  "shrubbery creation"};
	void (Form::*construtor[])(std::string) = { &PresidentialPardonForm,
											&RobotomyRequestForm,
											&ShrubberyCreationForm};
}
