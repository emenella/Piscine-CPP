#pragma once
# include <iostream>

class Form
{
	private:
		std::string name;
		bool isSigned;
	public:
		Form();
		Form(std::string);
		Form(const Form&);
		~Form();
		Form& operator=(const Form&);
};