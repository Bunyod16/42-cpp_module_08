#include <iostream>
#include <algorithm>
#include <vector>
#include "Span.hpp"
#include <array>
#include <cstdlib>
#include <random>

// int main(void)
// {
//     {
//         Span sp(5);

//         sp.addNumber(1);
//         sp.addNumber(4);
//         sp.addNumber(3);
//         sp.addNumber(2);
//         sp.addNumber(5);

//         try {
//             sp.addNumber(6);
//         }
//         catch (std::exception &e) {
//             std::cout << e.what() << std::endl;
//         }
//     }
//     {
//         Span sp(1);

//         sp.addNumber(1);

//         try {
//             std::cout << sp.shortestSpan() << std::endl;
//         }
//         catch (std::exception &e) {
//             std::cout << e.what() << std::endl;
//         }
//         try {
//             std::cout << sp.longestSpan() << std::endl;
//         }
//         catch (std::exception &e) {
//             std::cout << e.what() << std::endl;
//         }
//     }
//     {
//         Span sp(100000);
//         std::random_device rd;  // Create a random device
//         std::mt19937 gen(rd());  // Use the random device to seed a Mersenne Twister generator
//         std::uniform_int_distribution<> dis(INT_MIN, INT_MAX);
//         std::cout << "Generating 100 000 random numbers" << std::endl;
//         for (int x = 0; x < 100000; x++)
//             sp.addNumber(dis(gen));

//         try {
//             std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//         }
//         catch (std::exception &e) {
//             std::cout << e.what() << std::endl;
//         }
//         try {
//             std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
//         }
//         catch (std::exception &e) {
//             std::cout << e.what() << std::endl;
//         }
//     }
//     return 0;
// }

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
sp.fill(42, 5);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;}