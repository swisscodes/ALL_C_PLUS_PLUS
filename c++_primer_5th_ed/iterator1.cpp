#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> str = {"Hello", "world", "check this out"};

    for (auto &word : str) // reference or address of the word/string is important here to be able to make changes. else we will work with copy
    {
        size_t count = 0;
        while (count < word.size())
        {
            for (auto it = word.begin(), it1 = it + 1; it1 != word.end(); ++it, ++it1)
            {
                if (*it > *it1)
                {
                    char temp = *it;
                    *it = *it1;
                    *it1 = temp;
                }
            }

            ++count;
        }
    };

    for (auto kk : str)
    {
        std::cout << kk + " ";
    }
}