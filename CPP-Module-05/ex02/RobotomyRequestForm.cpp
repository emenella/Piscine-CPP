#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): Form("ShrubberyCreationForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &c): Form(c)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	Form::execute(executor);
	std::srand(std::time(NULL));
	std::cout << "zZzrRr zZzrRr zZzrRr !!!" << std::endl;
	if (std::rand() % 2)
		std::cout << this->name << " has been robotomized" << std::endl;
	else
		std::cout << this->name << " has been failed" << std::endl;
}
