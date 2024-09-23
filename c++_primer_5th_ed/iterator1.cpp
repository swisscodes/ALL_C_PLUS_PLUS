#include <iostream>
#include <string>
#include <vector>


int main()
{
    std::vector<std::string> str = {"Hello", "world", "check this out"};
    for (auto it = str.begin(); it != str.end(); ++it)
    {
       bool _ = (*it).empty(); // the newer form of this syntax below
       bool __ = it-> empty(); // the newer form of this syntax below
       std::cout << *it << std::endl;
    }
    
}