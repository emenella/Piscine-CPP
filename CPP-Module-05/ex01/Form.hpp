#pragma once
# include <iostream>
# include "Bureaucrat.hpp"
# define ERR_HIGH "Exception: grade is too high from "
# define ERR_LOW "Exception: grade is too low from "
 
class Form
{
		private:
				const std::string	name;
				bool				isSigned;
				int					grade;
 
		public:
				Form();
				Form(std::string, int);
				Form(const Form&);
				std::string getName() const;
				bool getIsSigned() const;
				~Form();
				Form& operator=(const Form&);
				int getGrade() const;
				void beSigned(Bureaucrat&);
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
std::ostream& operator<<(std::ostream&, const Form&);