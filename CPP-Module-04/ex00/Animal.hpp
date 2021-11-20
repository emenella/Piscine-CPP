#pragma once

# include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		std::string getType() const;
		Animal& operator=(const Animal &);
		virtual void makeSound() const;
};