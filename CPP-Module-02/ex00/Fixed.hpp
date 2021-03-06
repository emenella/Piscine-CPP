#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{
	private:
		int fixed;
		static const int fractional;
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed &operator=(const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
#endif