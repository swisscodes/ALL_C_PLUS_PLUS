#include <iostream>

int main()
{
    int my_arr[5] = {1,2,3,4,5};
    int &b = my_arr[4];
    std::cout << b << std::endl;
    b = 6;
    for(auto i : my_arr)
    {
        std::cout << i << std::endl;
    }
    

}