#pragma once

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
	    ~Dog(); 
		Dog(const Dog&);
	    Dog& operator=(const Dog&);
		virtual void makeSound() const;
};
