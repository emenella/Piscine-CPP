#include "Span.hpp"

Span::Span(): array(std::vector<int>(0))
{
}

Span::Span(unsigned int N): array(std::vector<int>()), max_size(N)
{

}

Span::~Span()
{

}

Span::Span(const Span &c)
{
	if (this != &c)
		this->array = c.array;
}

Span& Span::operator=(const Span &c)
{
	if (this != &c)
		this->array = c.array;
	return(*this);
}

void Span::addNumber(int i)
{
	if (array.size() < max_size)
		array.push_back(i);
	else
		throw Span::isFull(std::to_string(i));
}

int Span::shortestSpan()
{
	if (array.size() == 0)
		throw Span::Notfound("shortestSpan");
	return (*(std::min_element(array.begin(), array.end())));
}

int Span::longestSpan()
{
	if (array.size() == 0)
		throw Span::Notfound("shortestSpan");
	return (*(std::max_element(array.begin(), array.end())));
}
