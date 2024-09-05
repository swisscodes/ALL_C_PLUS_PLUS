#include <iostream>

int main()
{
    int sum = 0;
    //keep executing the while as long as val is less than or equal to 10
    for (int val = 10; val >= 1; --val)
    {
        sum += val;
    }
    
    std::cout << "Sum of 10 to 1 inclusive is " << sum << std::endl;

    return 0;
}
