#include <iostream>
#include <algorithm>
#include <string>

class notFound: public std::exception
{
	private:
		std::string cause;
	public:
		notFound(int nb) throw(): cause(std::to_string(nb) + " not found !") {}
		~notFound() throw() {}
		const char* what() const throw() {return (cause.c_str());}
};

template <typename T>
typename T::iterator easyfind(T &element, int find)
{
	typename T::iterator pos;
	typename T::iterator end(element.end());

	for (pos = element.begin(); pos != end; ++pos)
	{
		if (*pos == find)
			return (pos);
	}
	throw notFound(find);
	return (pos);
}