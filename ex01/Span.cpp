#include "Span.hpp"

// Constructors
Span::Span(unsigned int n) : _max(n)
{
	_filled = 0;
}

Span::Span(const Span &copy)
{
	_max = copy._max;
	_filled = copy._filled;
	_v.assign(copy._v.begin(), copy._v.end());
}


// Destructor
Span::~Span()
{
}


// Operators
Span & Span::operator=(const Span &assign)
{
	_max = assign._max;
	_filled = assign._filled;
	_v.assign(assign._v.begin(), assign._v.end());
	return *this;
}

void Span::addNumber(int n)
{
	if ((int)_v.size() < _max)
		_v.push_back(n);
	else
		throw MaxLenException();
}

int	Span::shortestSpan( void )
{
	if ((int)_v.size() < 2)
		throw ArrayTooSmallException();
	std::sort(_v.begin(), _v.end());
	return (_v[1] - _v[0]);
}

int	Span::longestSpan( void )
{
	if ((int)_v.size() < 2)
		throw ArrayTooSmallException();
	std::sort(_v.begin(), _v.end());
	return ( _v.back() - _v.front());
}
