#pragma once
# include <iostream>
# include <exception>
# include "Form.hpp"
# define ERR_HIGH "Exception: grade is too high from "
# define ERR_LOW "Exception: grade is too low from "
class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat&);
		std::string getName() const;
		int getGrade() const;
		Bureaucrat& operator++();
		Bureaucrat operator++(int);
		Bureaucrat& operator--();
		Bureaucrat operator--(int);
		void signForm(Form&);
		class GradeTooHighException : public std::exception
		{
			private:
				std::string cause;
			public:
				GradeTooHighException(const std::string name) throw(): cause(ERR_HIGH + name) {}
				~GradeTooHighException() throw() {}
				const char* what() const throw() {return (cause.c_str());}
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string cause;
			public:
				GradeTooLowException(const std::string name) throw(): cause(ERR_HIGH + name) {}
				~GradeTooLowException() throw() {}
				const char* what() const throw() {return (cause.c_str());}
		};
};
std::ostream& operator<<(std::ostream&, const Bureaucrat&);