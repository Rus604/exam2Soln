#include <iostream>

int main() {
    std::cout << "What is your name? ";
    std::string userInput{};
    std::getline(std::cin, userInput);
    std::size_t p{userInput.find("or")};
    std::size_t n{userInput.length() - 7};
    std::cout << "Your username is " << userInput.substr(p, n)
              << std::endl;
    return 0;
}