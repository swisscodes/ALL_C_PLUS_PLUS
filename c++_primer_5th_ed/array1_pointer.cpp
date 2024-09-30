#include <iostream>
#include <algorithm>

int main()
{
    std::string str_arr[] = {"zyxwvutsrqponmlkjihgfedcba", "Hello", "world"};

    // auto *str_ptr = str_arr;

    for (auto &word : str_arr)
    {
        // std::transform(word.begin(), word.end(), word.begin(), ::tolower); // converts word to lower
        size_t count = 0;
        while (count < word.size())
        {
            for (auto abc = begin(word), cde = abc + 1; cde != end(word); ++abc, ++cde)
            {
                *abc = tolower(*abc);
                *cde = tolower(*cde);
                if (*abc > *cde)
                {
                    auto temp = *cde;
                    *cde = *abc;
                    *abc = temp;
                }
            }
            ++count;
        }
    }

    for (auto word : str_arr)
    {
        std::cout << word << std::endl;
    }

    auto abc = begin(str_arr);
}