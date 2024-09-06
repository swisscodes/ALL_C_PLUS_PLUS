#include <iostream>

int main()
{
    int sum = 0, value = 0;

    std::cout << "Please enter a number" << std::endl;
    while (std::cin >> value) 
    {
        sum += value;
    }
    std::cout << "sum is: " << sum << std::endl;
    return 0;
    
}