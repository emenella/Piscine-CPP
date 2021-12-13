#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat poleEmploi = Bureaucrat("Pôle emploi", 150);
	Bureaucrat *crous = new Bureaucrat("CROUS", 1);

	try
	{
		std::cout << poleEmploi << std::endl;
		poleEmploi++;
		std::cout << poleEmploi << std::endl;
		++poleEmploi;
		std::cout << poleEmploi << std::endl;
		poleEmploi--;
		std::cout << poleEmploi << std::endl;
		--poleEmploi;
		std::cout << poleEmploi << std::endl;
		--poleEmploi;
		std::cout << poleEmploi << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << *crous << std::endl;
		(*crous)--;
		std::cout << *crous << std::endl;
		--(*crous);
		std::cout << *crous << std::endl;
		(*crous)++;
		std::cout << *crous << std::endl;
		++(*crous);
		std::cout << *crous << std::endl;
		++(*crous);
		std::cout << *crous << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete crous;
}