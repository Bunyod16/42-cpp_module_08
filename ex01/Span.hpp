#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		// Constructors
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		int	shortestSpan( void );
		int	longestSpan( void );
		void addNumber ( int n );
		template <typename Iter>
		void fill(Iter begin, Iter end)
		{
			if (end - begin > _max)
				throw MaxLenException();
			_v.assign(begin, end);
			if (end - begin > _filled)
				_filled = end - begin;
			for (int i = 0; i != (int)_v.size(); i++) {
				std::cout << _v[i] << " ";
			}
			std::cout << std::endl;
			
		}



		class MaxLenException : public std::exception {
			public:
				virtual const char * what () const throw()
				{
					return ("Attempted to add more than maximum capacity of the Span.");
				}
		};

		class ArrayTooSmallException : public std::exception {
			public:
				virtual const char * what () const throw()
				{
					return ("Array must have at least 2 elements.");
				}
		};

	private:
		std::vector<int> _v;
		int	_max;
		int	_filled;
		
};

#endif