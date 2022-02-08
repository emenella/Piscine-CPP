#pragma once
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack(): std::stack<T>() {}
		MutantStack(MutantStack &c): std::stack<T>(c) {}
		MutantStack& operator=(MutantStack &cp)
		{
			if (this != &cp)
			{
				std::stack<T>::operator=(cp);
			}
			return(*this);
		}
		iterator begin() {return(std::stack<T>::c.begin());}
		iterator end() {return(std::stack<T>::c.end());}
		reverse_iterator rbegin() {return(std::stack<T>::c.rbegin());}
		reverse_iterator rend() {return(std::stack<T>::c.rend());}


		const_iterator cbegin() {return(std::stack<T>::c.begin());}
		const_iterator cend() {return(std::stack<T>::c.end());}
		const_reverse_iterator crbegin() {return(std::stack<T>::c.rbegin());}
		const_reverse_iterator crend() {return(std::stack<T>::c.rend());}
};