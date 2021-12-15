#include "Form.hpp"
 
Form::Form(): name("Default Form"), isSigned(false), grade(150) {}
 
Form::Form(std::string name, int grade): name(name), isSigned(false), grade(grade) 
{
	if (grade < 1)
		throw Form::GradeTooHighException(this->name);
	else if (grade > 150)
		throw Form::GradeTooLowException(this->name);
}
 
Form::Form(const Form&): name(name), isSigned(false), grade(grade)
{
 
}
 
Form::~Form()
{
 
}
 
Form& Form::operator=(const Form &st)
{
	if (this != &st)
	{
		this->isSigned = st.isSigned;
				this->grade = st.grade;
	}
	return (*this);
}

int Form::getGrade() const
{
	return (grade);
}

std::string Form::getName() const
{
		return(name);
}
 
bool Form::getIsSigned() const
{
		return(isSigned);
}

void Form::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= this->grade)
	{
		this->isSigned = true;
		obj.signForm(*this);
	}
	else
		throw Form::GradeTooLowException(this->name);
}

std::ostream& operator<<(std::ostream &out, const Form &obj)
{
	out << "<" << obj.getName() << ">, form grade <"<< obj.getGrade() << ">, is signed ? <" << obj.getIsSigned()<< ">.";
	return (out);
}