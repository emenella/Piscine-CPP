#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		std::vector<int> array;
		unsigned int max_size;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span&);
		Span& operator=(const Span&);
		void addNumber(int);
		int shortestSpan();
		int longestSpan();
		template <typename T>
		void addNumber(T begin, T end)
		{
			for (T pos = begin; pos != end; pos++)
				addNumber(*pos);
		}
		class Notfound: public std::exception
		{
			private:
				std::string cause;
			public:
				Notfound(std::string from) throw(): cause("Notfound from " + from) {}
				~Notfound() throw(){}
				const char* what() const throw() {return (cause.c_str());}
		};
		class isFull: public std::exception
		{
			private:
				std::string cause;
			public:
				isFull(std::string from) throw(): cause("isFull from " + from) {}
				~isFull() throw(){}
				const char* what() const throw() {return (cause.c_str());}
		};
};