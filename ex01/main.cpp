#include <iostream>
#include <algorithm>
#include <vector>
#include "Span.hpp"
#include <array>
#include <cstdlib>
#include <random>

int main(void)
{
    {
        Span sp(5);

        sp.addNumber(1);
        sp.addNumber(4);
        sp.addNumber(3);
        sp.addNumber(2);
        sp.addNumber(5);

        try {
            sp.addNumber(6);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Span sp(1);

        sp.addNumber(1);

        try {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Span sp(100000);
        std::random_device rd;  // Create a random device
        std::mt19937 gen(rd());  // Use the random device to seed a Mersenne Twister generator
        std::uniform_int_distribution<> dis(0, 10000);
        std::cout << "Generating 10 random numbers" << std::endl;
        for (int x = 0; x < 10; x++) {
            double a = dis(gen);
            std::cout << a << " ";
            sp.addNumber(a);
        }
        std::cout << std::endl;
        try {
            std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}

// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
    
//     std::vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     sp.fill(v1.begin(), v1.end());
//     return 0;
// }