#include <iostream>
#include <string>
#include <vector>

int main()
{
    // accessing elements with iterator instead of subscript
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

    std::vector<int>::iterator it1;       // it can read and write vector<int> elements
    std::string::iterator it2;            // it2 can read and write characters in a string
    std::vector<int>::const_iterator it3; // it3 can read but not write elements
    std::string::const_iterator it4;      // it4 can read but not write characters


    auto it3 = s.cbegin(); // it3 has type vector<int>::const_iterator
}