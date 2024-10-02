#include <iostream>

int main()
{
    int *p[4]; // int pointer array
    int num = 6;
    int arr[] = {1,2,3,4};

    for (auto a : p)
    {
        a = &num;
        std::cout << *a << std::endl;
    }
    
    int(*ip)[4]; // pointer to an array of four ints
    ip = &arr;

    for (auto a : *ip)
    {
        std::cout << a << std::endl;
    }
}