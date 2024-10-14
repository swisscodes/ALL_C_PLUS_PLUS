#include <iostream>
#include <string>

int main()
{
    std::string ii[2];
    char str[10];
    char *ptr = &str[0];

    for(auto a : str)
    {
        a='s';
        std::cout << a << std::endl;
    }

    
    for(auto a : ii)
    {
        a="hello";
        std::cout << a << std::endl;
    }

}