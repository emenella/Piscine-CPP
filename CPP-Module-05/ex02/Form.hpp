#pragma once
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# define ERR_HIGH "Exception: grade is too high from "
# define ERR_LOW "Exception: grade is too low from "
class Bureaucrat;

class Form
{
		private:
				const std::string	name;
				bool				isSigned;
				int					gradeSign;
				int					gradeExec;
 
		public:
				Form();
				Form(std::string, int, int);
				Form(const Form&);
				std::string getName() const;
				bool getIsSigned() const;
				~Form();
				Form& operator=(const Form&);
				int getGradeSign() const;
				int getGradeExec() const;
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
								GradeTooLowException(const std::string name) throw(): cause(ERR_LOW + name) {}
								~GradeTooLowException() throw() {}
								const char* what() const throw() {return (cause.c_str());}
				};
};
std::ostream& operator<<(std::ostream&, const Form&);