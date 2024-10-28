#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_int(20, 1);
    auto it = my_int.begin();

    fill(my_int.begin(), my_int.begin() + my_int.size() / 2, 10);

    while (it != my_int.begin() + my_int.size() / 2)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    while (it != my_int.end())
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "none" << std::endl;
}