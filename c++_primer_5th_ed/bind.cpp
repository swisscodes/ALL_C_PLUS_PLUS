#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

bool truthy(const int &item, int num)
{
    return item == num;
}

int main()
{
    int num = 5;
    std::vector<int> my = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto it = std::find_if(my.begin(), my.end(), std::bind(truthy, std::placeholders::_1, num));

    std::cout << *it << std::endl;
}