#include <iostream>
#include <array>

int main()
{
    int *p[4]; // int pointer array
    int num = 6;
    int arr[] = {1, 2, 3, 4};

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

    int x[2][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}};
    int y[1][10];
    int(*pp)[10] = x;
    std::cout << *(*++pp) << std::endl;

    std::array<std::array<int, 10>, 2> std_arr = {{ {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {11, 12, 13, 14, 15, 16, 17, 18, 19, 20} }};

}