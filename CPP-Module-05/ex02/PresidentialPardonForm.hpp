#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm&);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		void execute(Bureaucrat const &executor);
};