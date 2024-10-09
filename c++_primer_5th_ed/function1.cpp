#include <iostream>


int larger(const int a, const int *ptr)// declaring a as const int makes us able to pass literal int
{
    const int res = (a > *ptr && a != *ptr) ? a : *ptr > a ?  *ptr : 0;
    return res;
}

int fact(int num)
{
    if(num > 1)
    {
        return fact(num-1) * num;
    }
    return 1;
}

int main()
{
    int bb = 8;
    const int *p = &bb;
    std::cout << larger(55, p) << std::endl;

    std::cout << fact(5) << std::endl;

}