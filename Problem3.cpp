#include <iostream>

int main() {
    std::cout << "Enter length and width for Rectangle 1: ";
    int len1{};
    int width1{};
    std::cin >> len1 >> width1;
    std::cout << "Enter length and width for Rectangle 2: ";
    int len2{};
    int width2{};
    std::cin >> len2 >> width2;
    if (len1*width1 > len2*width2) {
        std::cout << "Rectangle 1 has the greater area";
    } else if (len1*width1 == len2*width2) {
        std::cout << "Rectangle 1 has the same area as Rectangle 2";
    } else {
        std::cout << "Rectangle 2 has the greater area";
    }
    std::cout << "." << std::endl;

    return 0;
}
