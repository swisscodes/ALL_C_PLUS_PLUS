#include <iostream>

// everything same like other programming languages

int main()
{
    std::string word;
    std::cin >> word;
    int count = 0;
    int aa;

    for (auto ch : word)
    {
        std::cout << ch;
        ++count;
    }

    std::cout << std::endl;
    std::cout << "total word count = " << count << std::endl;

    std::cout << "*********************PART 2 ************************" << std::endl;
    std::cout << "using reference to access and change character by character" << std::endl;

    for (auto &ch : word)
    {
        ch = toupper(ch);
    }
    std::cout << word << std::endl;
}