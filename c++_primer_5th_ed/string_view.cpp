#include <iostream>

void print(std::string::const_iterator view_start, std::string::const_iterator view_end)
{
    while (view_start != view_end)
    {
        std::cout << *view_start;
        ++view_start;
    }
    std::cout << std::endl;
    std::cout << sizeof(view_start) + sizeof(view_end);
}

int main()
{
    std::string s = "hello world";
    print(s.begin(), s.end());
}