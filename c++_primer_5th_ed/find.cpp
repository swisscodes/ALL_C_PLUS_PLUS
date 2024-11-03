#include <iostream>
#include <algorithm>


int main()
{
    std::string str  = "swiss,bobo,lawal,why,not";

    auto comma = std::find(str.cbegin(), str.cend(), ',');
    std::cout << std::string(str.cbegin(), comma) << std::endl;
    std::cout << *comma.base() << std::endl;


}