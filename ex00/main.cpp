#include <iostream>
#include "easyfind.hpp"
#include <array>

int main(void)
{
    {
        std::vector<int> va(5, 100);
        va[2] = 9;

        std::cout << "should find value 9" << std::endl;
        easyfind(va, 9);
    }
    {
        std::vector<int> va(10, 100);
        va[2] = -5;

        try {
            std::cout << "should NOT find value 5" << std::endl;
            easyfind(va, 5);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::array<int, 5> arr;

        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;
        std::cout << "should find value 3" << std::endl;
        easyfind(arr, 3);
    }
    {
        std::array<int, 5> arr;

        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;
        try {
            std::cout << "should NOT find value 6" << std::endl;
            easyfind(arr, 6);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}