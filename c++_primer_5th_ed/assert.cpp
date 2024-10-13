#include <iostream>
#include <cassert>

#define NDEBUG


int test()
{
    return 0;
}

int main()
{
    std::string s;
    while (std::cin >> s && s != "o") {
        std::cout << s << std::endl;

        #ifndef NDEBUG
            assert( 4 < 5);
        #endif
        
        int (*p)() = nullptr;
        p=test;


    }  // empty body
}