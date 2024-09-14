#include <iostream>

int main()
{
    int cnt = 0;
    int r = 5;
    const int sz = cnt;
    ++cnt; ++cnt;

    std::cout << cnt << std::endl;
}