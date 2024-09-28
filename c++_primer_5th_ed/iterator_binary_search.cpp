#include <iostream>
#include <string>


void sortString(std::string string_to_sort)
    {
        for(auto it = string_to_sort.begin(); it != string_to_sort.end(); ++it)
        {
            if (*it == 'H')
            {
              *it = 'S';
            }
            
            std::cout << *it << std::endl;

        }
    }

int main()
{
    std::string text = "Hello world";
    std::cout << "before sort " << text << std::endl;
    sortString(text);
    std::cout << "after sort " << text << std::endl;
    auto beg = text.begin(), end = text.end();
    std::cout << *beg << std::endl;


    

}