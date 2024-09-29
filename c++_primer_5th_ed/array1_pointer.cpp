#include <iostream>

int main()
{
    std::string str_arr[] = {"zyxwvutsrqponmlkjihgfedcba", "Hello", "world"};
    
    auto *ptr = str_arr;
    std::cout << *++ptr << std::endl;


}