#include "Form.hpp"
 
Form::Form(): name("Default Form"), isSigned(false), gradeSign(150) {}
 
Form::Form(std::string name, int grade, int note): name(name), isSigned(false), gradeSign(grade), gradeExec(note)
{
	if (gradeSign < 1)
		throw Form::GradeTooHighException(this->name);
	else if (gradeSign > 150)
		throw Form::GradeTooLowException(this->name);
	if (gradeExec < 1)
		throw Form::GradeTooHighException(this->name);
	else if (gradeExec > 150)
		throw Form::GradeTooLowException(this->name);
}
 
Form::Form(const Form &c): name(c.name), isSigned(false), gradeSign(c.gradeSign)
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
		this->gradeSign = st.gradeSign;
		this->gradeExec = st.gradeExec;
	}
	return (*this);
}

int Form::getGradeSign() const
{
	return (gradeSign);
}

int Form::getGradeExec() const
{
	return (gradeExec);
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
	if (obj.getGrade() <= this->gradeSign)
	{
		this->isSigned = true;
	}
	else
		throw Form::GradeTooLowException(obj.getName());
}

std::ostream& operator<<(std::ostream &out, const Form &obj)
{
	out << "<" << obj.getName() << ">, form grade <"<< obj.getGradeSign() << ">, is signed ? <" << obj.getIsSigned() << ">, grade for execution " << obj.getGradeExec() << "." << std::endl;
	return (out);
}