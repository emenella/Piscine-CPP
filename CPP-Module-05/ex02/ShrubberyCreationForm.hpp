#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm&);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
		void execute(Bureaucrat const &executor);
};