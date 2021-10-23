#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed(): fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	fixed = i << fractional;
}

Fixed::Fixed(const float f)
{
	fixed = roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed &c): fixed(c.fixed)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &c)
		fixed = c.fixed;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)fixed / (1 << fractional));
}

int Fixed::toInt(void) const
{
	return (fixed >> fractional);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}
