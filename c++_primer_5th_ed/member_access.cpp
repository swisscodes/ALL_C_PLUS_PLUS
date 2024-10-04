#include <iostream>

int main()
{
    std::string s1 = "Hello world";
    auto *ptr = &s1;
    

    size_t aa = ptr->size();  // new way of saying (*ptr).size();

    std::cout << aa << std::endl;


    
}