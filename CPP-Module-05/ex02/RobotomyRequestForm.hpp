#pragma once
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm&);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		void execute(Bureaucrat const &executor);
};