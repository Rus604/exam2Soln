#include <cstdlib>
#include <iostream>

int main()
{
    int numPrinted{0};
    for (char c{32}; c < 127; c += 1, numPrinted += 1) {
        std::cout << c << " ";
        if ((numPrinted + 1) % 16 == 0) {
            std::cout << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
