#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class NoSuchElementException : public std::exception
{
	public:
		virtual const char * what () const throw()
		{
			return ("Such element doesn't exist");
		}
};

template <typename T>
void easyfind(T &a, int num) {
    bool exists = std::find(std::begin(a), std::end(a), num) != std::end(a);;
    
    if (exists == true) {
        std::cout << "Found value: " << num << std::endl;
    } else {
        std::cout << "Value not found: " << num << std::endl;
        throw NoSuchElementException();
    }
}

#endif