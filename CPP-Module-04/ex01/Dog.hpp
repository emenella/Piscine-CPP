#pragma once

# include <iostream>
# include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
	    ~Dog(); 
		Dog(const Dog&);
	    Dog& operator=(const Dog&);
		void makeSound() const;
};
