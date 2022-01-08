#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &c): Form(c)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	Form::execute(executor);
	std::ofstream file;

	file.open(this->name + "_shrubbery");
	file << "       _-_\n"
		  "    /~~   ~~\\n"
		  " /~~         ~~\\n"
		  "{               }\n"
		  "    _-     -_  /\n"
		  "   ~  \\ //  ~\n"
		  "_- -   | | _- _\n"
		  "  _ -  | |   -_\n"
		  "      // \\";
file.close();
}
