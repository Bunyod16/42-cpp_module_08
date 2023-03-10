#include "Span.hpp"
#include <vector>
#include <numeric>

// Constructors
Span::Span() : _max(0)
{
	_filled = 0;
}

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
	_filled++;
}

int	Span::shortestSpan( void )
{
	int minDiff = INT_MAX;
	int diff;

	if ((int)_v.size() < 2 || _filled < 2)
		throw ArrayTooSmallException();
	std::sort(_v.begin(), _v.end());
	for (int i = 1; i < (int)_v.size(); i++) {
		diff = _v[i] - _v[i - 1];
		if (diff < minDiff)
			minDiff = diff;
	}
	return (minDiff);
}

int	Span::longestSpan( void )
{
	if ((int)_v.size() < 2 || _filled < 2)
		throw ArrayTooSmallException();
	double mn, mx;

	mn =*std::min_element(_v.begin(), _v.end());
	mx = *std::max_element(_v.begin(), _v.end());
	return mx - mn;
}
