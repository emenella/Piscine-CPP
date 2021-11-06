#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	Fixed c(10);
	Fixed d(15);
	std::cout << __LINE__ << ": " << c << std::endl;
	std::cout << __LINE__ << ": " << d << std::endl;
	c = c + d;
	std::cout << __LINE__ << ": " << c << std::endl;
	Fixed e = d;
	std::cout << __LINE__ << ": " << e << std::endl;
	d = d / 3; 
	std::cout << __LINE__ << ": " << d << std::endl;
	d = d * 10;
	std::cout << __LINE__ << ": " << d << std::endl;
	d = d - c;
	std::cout << __LINE__ << ": " << d << std::endl;
	
	Fixed f0(1);
	Fixed f1(2);

	if (f0 != f1)
		std::cout << "!=" << std::endl;
	f1 = f1 - 1;
	if (f0 == f1)
		std::cout << "==" << std::endl;
	if (f0 <= f1)
		std::cout << "<=" << std::endl;
	if (f0 >= f1)
		std::cout << ">=" << std::endl;
	f1 = f1 + 1;
	if (f0 < f1)
		std::cout << "<" << std::endl;
	f1 = f1 - 2;
	if (f0 > f1)
		std::cout << ">" << std::endl;
	return 0;
}
