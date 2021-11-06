#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed;
		static const int fractional;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		~Fixed();

		Fixed& operator=(const Fixed&);
		bool operator>(const Fixed &c);
		bool operator<(const Fixed &c);
		bool operator>=(const Fixed &c);
		bool operator<=(const Fixed &c);
		bool operator==(const Fixed &c);
		bool operator!=(const Fixed &c);
		Fixed& operator+(const Fixed &c);
		Fixed& operator-(const Fixed &c);
		Fixed& operator*(const Fixed &c);
		Fixed& operator/(const Fixed &c);
		Fixed& operator++(void);
		Fixed operator++(int n);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};
std::ostream& operator<<(std::ostream& out, const Fixed& obj);
#endif