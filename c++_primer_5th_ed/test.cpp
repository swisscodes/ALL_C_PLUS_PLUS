#include <iostream>

int a;

int main()
{
    int b;
    std::cout << a << " " << b << std::endl;
    // always treat unitialiazed as UB/undefined ub = Undefined Behaviour.
}