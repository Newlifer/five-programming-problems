#include <iostream>

#include "problem1.hpp"

auto main () -> int
{
    std::cout << std::boolalpha;

    // Problem 1
    {
        std::cout << "Probllem 1:\n";

        const std::list<int> a = {1,2,3,4};
        const auto ex = 10;

        {
            const auto rs = sum_for_loop (a);
            std::cout << "For loop: " << (rs == ex) << std::endl;
        }

        {
            const auto rs = sum_while_loop (a);
            std::cout << "While loop: " << (rs == ex) << std::endl;
        }

        {
            const auto rs = sum_recursively (a);
            std::cout << "Recursive: " << (rs == ex) << std::endl;
        }
    }
    return 0;
}
