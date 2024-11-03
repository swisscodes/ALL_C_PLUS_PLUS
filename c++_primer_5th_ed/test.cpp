#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>

int a;

int main()
{
    std::map<std::string, size_t> word_count; // empty map from string to size_t
    std::set<std::string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    std::set<std::string> exclude = {".", "?", "!", ",", ";", ":", "-", "'", "\"", "..."};
    std::string::iterator p;
    
    std::string word;
    std::string::iterator p;
    while (std::cin >> word)
    {
        std::transform(word.begin(), word.end(), word.begin(), tolower);
        
        if (exclude.find(word) == exclude.end())
            ++word_count[word]; // fetch and increment the counter for word
    }
    for (const auto &w : word_count) // for each element in the map
        // print the results
        std::cout << w.first << " occurs " << w.second
                  << ((w.second > 1) ? " times" : " time") << std::endl;
}