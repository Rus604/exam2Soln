#include <cstdlib>
#include <iostream>

int main()
{
    int a{};
    int x{23};
    a = x % 2;
    std::cout << x << std::endl << a << std::endl;
    return EXIT_SUCCESS;
}
