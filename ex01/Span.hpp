#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		// Constructors
		Span(unsigned int n);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		int	shortestSpan( void ) const;
		int	longestSpan( void ) const;
		void addNumber ( int n );

		class MaxLenException : public std::exception {
			public:
				virtual const char * what () const throw()
				{
					return ("Attempted to add more than maximum capacity of the Span.");
				}
		};

	private:
		std::vector<int> _v;
		int	_max;
		int	_filled;
		
};

#endif