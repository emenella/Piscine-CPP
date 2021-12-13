#pragma once
# include <iostream>
# include <exception>
# define ERR_HIGH "Exception: grade is too high"
# define ERR_LOW "Exception: grade is too low"

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
		class GradeTooHighException : public std::exception
		{
			private:
				std::string cause;
			public:
				GradeTooHighException() throw(): cause(ERR_HIGH) {}
				~GradeTooHighException() throw() {}
				const char* what() const throw() {return (cause.c_str());}
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string cause;
			public:
				GradeTooLowException() throw(): cause(ERR_LOW) {}
				~GradeTooLowException() throw() {}
				const char* what() const throw() {return (cause.c_str());}
		};
};
std::ostream& operator<<(std::ostream&, const Bureaucrat&);