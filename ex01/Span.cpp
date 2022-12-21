#include "Span.hpp"

// Constructors
Span::Span(unsigned int n) : _max(n)
{
	_filled = 0;
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

void Span::addNumber(int n)
{
	if (_v.size() < _max)
		_v.push_back(n);
	else
		throw MaxLenException();
}

int	Span::shortestSpan( void ) const
{
	std::cout << "Bork!"  + _type << std::endl;
}

int	Span::longestSpan( void ) const
{
	std::cout << "Bork!"  + _type << std::endl;
}
