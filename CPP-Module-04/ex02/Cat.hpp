#pragma once

# include <iostream>
# include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain		*brain;
	public:
		Cat();
	    ~Cat(); 
		Cat(const Cat&);
	    Cat& operator=(const Cat&);
		virtual void makeSound() const;
};