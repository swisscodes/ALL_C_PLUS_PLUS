#include <iostream>
#include <string>

int main()
{
    std::string s = "some string";
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (!isalpha(*it))
        {
           continue;
        }
        
        
        *it = toupper(*it);
        
    }
    
    std::cout << s << std::endl;
}