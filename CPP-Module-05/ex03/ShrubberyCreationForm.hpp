#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm&);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const &executor) const;
};