#include <iostream>
// #include <algorithm> for transform

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
            for (auto abc = std::begin(word), cde = abc + 1; cde != std::end(word); ++abc, ++cde)
            {
                *abc = std::tolower(*abc);
                *cde = std::tolower(*cde);
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