#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm&);
		~PresidentialPardonForm();
		void execute(Bureaucrat const &executor) const;
};