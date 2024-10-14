#include <iostream>

int fact(int val)
{
    int result = 1;
    while (val > 1)
    {
        result *= val--;
    }

    return result;
}

void ptr_test(int *p)
{
    std::cout << *p << std::endl;
    p = 0;
    std::cout << p << std::endl;

}

int main()
{
    int ptr_num = 55;
    std::cout << fact(5) << std::endl;
    auto f = []()
    {
        return 42;
    };

    ptr_test(&ptr_num);


    return 0;
}
