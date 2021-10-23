#include "Fixed.hpp"

const int Fixed::fractional = 8;


// ==========================
// Constructors, Destructor

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
}

Fixed::~Fixed()
{
}

// ==========================
// Operator

bool Fixed::operator>(const Fixed &c)
{
	if (this->fixed > c.fixed)
		return (1);
	return (0);
}

bool Fixed::operator<(const Fixed &c)
{
	if (this->fixed < c.fixed)
		return (1);
	return (0);
}

bool Fixed::operator>=(const Fixed &c)
{
	if (this->fixed >= c.fixed)
		return (1);
	return (0);
}

bool Fixed::operator<=(const Fixed &c)
{
	if (this->fixed <= c.fixed)
		return (1);
	return (0);
}

bool Fixed::operator==(const Fixed &c)
{
	if (this->fixed == c.fixed)
		return (1);
	return (0);
}

bool Fixed::operator!=(const Fixed &c)
{
	if (this->fixed != c.fixed)
		return (1);
	return (0);
}

Fixed &Fixed::operator+(const Fixed &c)
{
	this->fixed += c.fixed;
	return (*this);
}

Fixed &Fixed::operator-(const Fixed &c)
{
	this->fixed -= c.fixed;
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &c)
{
	this->fixed = roundf(toFloat() * c.toFloat() * (1 << fractional));
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &c)
{
	this->fixed = roundf(toFloat() / c.toFloat() * (1 << fractional));
	return (*this);
}

Fixed& Fixed::operator++(void)
{
	fixed++;
	return (*this);
}

Fixed Fixed::operator++(int n)
{
	(void)n;
	Fixed tmp(this->toFloat());
	++fixed;
	return (tmp);
}

Fixed &Fixed::operator=(const Fixed &c)
{
	if (this != &c)
		fixed = c.fixed;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}

// ==========================
// Functions

int Fixed::getRawBits(void) const
{
	return (fixed);
}

void Fixed::setRawBits(int const raw)
{
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

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return(a);
	return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}
