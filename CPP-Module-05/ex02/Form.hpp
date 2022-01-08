#pragma once
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# define ERR_HIGH "Exception: grade is too high from "
# define ERR_LOW "Exception: grade is too low from "
# define ERR_SIGNED "Exception: the form isn't signed"

class Bureaucrat;

class Form
{
		protected:
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
				virtual ~Form();
				Form& operator=(const Form&);
				int getGradeSign() const;
				int getGradeExec() const;
				void beSigned(Bureaucrat&);
				virtual void execute(Bureaucrat const &executor) const;
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
				class FormIsNotSigned : public std::exception
				{
						private:
								std::string cause;
						public:
								FormIsNotSigned(const std::string name) throw(): cause(ERR_SIGNED + name) {}
								~FormIsNotSigned() throw() {}
								const char* what() const throw() {return (cause.c_str());}
				};
};
std::ostream& operator<<(std::ostream&, const Form&);