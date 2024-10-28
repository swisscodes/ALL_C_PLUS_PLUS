#include <iostream>

int main()
{
    std::string numbers("0123456789"), name("r2d2");
    int b;
    int a = (b = 1 + 1); // did this to understand how that while loop worked

    std::string::size_type pos = 0;
    // each iteration finds the next number in name
    while ((pos = name.find_first_of(numbers, pos)) != std::string::npos)
    {
        std::cout << "found number at index: " << pos
                  << " element is " << name[pos] << std::endl;
        ++pos; // move to the next character
    }

    std::cout << name.find_first_of(numbers, 0) << std::endl;

    auto computeSomething = [](const auto& data, auto str, auto twist) {

    };
}