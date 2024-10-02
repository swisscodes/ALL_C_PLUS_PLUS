#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> int_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> int_vec1(10);
    std::vector<int> int_vec2(100);
    std::iota(int_vec1.begin(), int_vec1.end(), 1); //to populate the int vector
    std::iota(begin(int_vec2), end(int_vec2), 1); //to populate the int vector
    int count = 0;


    // for (auto &item : int_vec1)
    // {

    //     item = ++count;
    // }

    std::cout << "before iterator changing" << std::endl;
    for (auto item : int_vec2)
    {
        std::cout << item << std::endl;
    }

    for (auto it = int_vec.begin(); it != int_vec.end(); ++it)
    {
        *it *= 2;
    }

    std::cout << "after iterator" << std::endl;
    for (auto item : int_vec)
    {
        std::cout << item << std::endl;
    }

    return 0;
}