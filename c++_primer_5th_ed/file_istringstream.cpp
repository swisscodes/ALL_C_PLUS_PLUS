#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string line, word;
    while (std::getline(std::cin, line)) {
        std::istringstream record (line);
        while(record >> word) {
            std::cout << word << std::endl;
        }
    }
}

// also ostringstream does the same for outputting string stream