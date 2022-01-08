#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default Bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(this->name);
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(this->name);
}

Bureaucrat::Bureaucrat(const Bureaucrat& src): name(src.name), grade(src.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this != &src)
	{
		grade = src.grade;
	}
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

Bureaucrat& Bureaucrat::operator++()
{
	if (grade > 1)
	{
		--grade;
		return (*this);
	}
	else
		throw (Bureaucrat::GradeTooHighException(name));
}

Bureaucrat Bureaucrat::operator++(int)
{
	if (grade > 1)
	{
		Bureaucrat tmp(name, grade);
		--grade;
		return(tmp);
	}
	else
		throw (Bureaucrat::GradeTooHighException(name));

}

Bureaucrat& Bureaucrat::operator--()
{
	if (grade < 150)
	{
		++grade;
		return (*this);
	}
	else
		throw (Bureaucrat::GradeTooLowException(name));
}

Bureaucrat Bureaucrat::operator--(int)
{
	if (grade < 150)
	{
		Bureaucrat tmp(name, grade);
		++grade;
		return(tmp);
	}
	else
		throw (Bureaucrat::GradeTooLowException(name));
}

void Bureaucrat::signForm(Form& obj)
{
	if (obj.getIsSigned())
		throw Bureaucrat::FormIsAlreadySigned(this->name);
	if (grade <= obj.getGradeSign())
	{
		std::cout << "<bureaucrat "<< name << "> signs <"<< obj.getName() << ">" << std::endl;
		obj.beSigned(*this);
	}
	else
		throw Bureaucrat::GradeTooLowException(this->name);
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << "<" << obj.getName() << ">, bureaucrat grade <"<< obj.getGrade() << ">.";
	return (out);
}
