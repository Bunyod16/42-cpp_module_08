#include <iostream>
#include <algorithm>
#include <vector>
#include "easyfind.hpp"
#include <array>

int main(void)
{
    {
        std::vector<int> va(5, 100);
        va[2] = 9;

        easyfind(va, 9);
    }
    {
        std::vector<int> va(5, 100);
        va[2] = 9;

        try {
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
            easyfind(arr, 6);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}