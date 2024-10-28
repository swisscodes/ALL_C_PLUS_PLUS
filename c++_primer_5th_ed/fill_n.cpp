#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> my_vec;

    std::cout << sizeof(my_vec) << std::endl;

    std::fill_n(back_inserter(my_vec), 10, 0);
    std::cout << my_vec.size() << std::endl;
}