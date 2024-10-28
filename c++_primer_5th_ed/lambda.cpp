#include <iostream>

int main()
{
    int abc = 0;
    int test = 0;
    int yu = 9;
    auto print = [&abc](int item)
    {
        std::cout << item << std::endl;
        abc = item + 4;
        return 1;
    };

    auto print1 = [](auto item) -> int { // we can also epxlicitly say the return type here
        std::cout << item << std::endl;
        return 1;
    };

    int ok = print(6);
    std::cout << abc << std::endl;

    /*  We can omit either or both of the parameter list and return type but must always
        include the capture list and function body:
    */
    auto f = []
    { return 42; };

    // to make all the local variables in the enclosing function available by value/copy we cant change or assign to abc here
    auto c = [=]()
    {
        std::cout << abc << std::endl;
    };

    // here we made local variables available by reference and then we can change them directly from inside lambda function
    auto gg = [&]()
    {
        abc = 9;
        std::cout << abc << std::endl;
    };

    // or we can also mix them
    auto gg1 = [&, yu]()
    {
        abc += yu;
        std::cout << abc << std::endl;
    };

    // or everything by value and some by ref
    auto gg2 = [=, &yu]()
    {
        yu += abc;
        std::cout << abc << std::endl;
    };

    gg1();

    // or everything by value
    auto gg3 = [=]() mutable
    {
        test = 9;
        yu += abc;
        std::cout << abc << std::endl;
    };
     // or everything by reference
    auto gg3 = [&]() mutable
    {
        test = 9;
        yu += abc;
        std::cout << abc << std::endl;
    };
    std::cout << test << std::endl;
}