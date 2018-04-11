#include <cstdlib>
#include <iostream>

int main()
{
    char c{32};
    int numPrinted{0};
    while (c < 127) {
        std::cout << c << " ";
        if ((numPrinted + 1) % 16 == 0) {
            std::cout << std::endl;
        }
        numPrinted += 1;
        c += 1;
    }
    return EXIT_SUCCESS;
}