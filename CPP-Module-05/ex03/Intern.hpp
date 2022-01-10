#pragma once
# include <exception>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# define ERR_INTERN "Exception: Form unknown from "

class Intern
{
	public:
		Intern();
		Intern(const Intern&);
		~Intern();
		Form* makeForm(std::string, std::string);
		class UnknownForm : public std::exception
		{
			public:
				std::string cause;
			public:
				UnknownForm(const std::string from) throw(): cause(ERR_INTERN + from) {}
				~UnknownForm() throw() {}
				const char* what() const throw() {return(cause.c_str());}
		};

};