#pragma once
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm&);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &executor) const;
};