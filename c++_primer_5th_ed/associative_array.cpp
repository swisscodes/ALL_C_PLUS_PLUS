#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>


int main()
{
    std::map<std::string, size_t> word_count; // empty map from string to size_t
    std::set<std::string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    std::set<std::string> punct = {".", "?", "!", ",", ";", ":", "-", "'", "\"", "..."};

    
    std::string word;
    while (std::cin >> word)
    {
        auto checkend = [&punct, &word] () {
            std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c) { return std::tolower(c);});
            
            for(auto p : punct) {
                auto wordend = word.rbegin();
                while(*wordend == *p.begin()) {
                    std::cout << "we got here" << std::endl;
                    word.pop_back(); 
                    // eraze : couldnt use rbegin because erase expects iterator not reverse iterator used ro ramove ranges
                    // remove also used for remove ranges but no copy.
                    ++wordend;
                }
            }
        };

        checkend();
        
        
        if (exclude.find(word) == exclude.end())
            ++word_count[word]; // fetch and increment the counter for word
    }
    for (const auto &w : word_count) { // for each element in the map// print the results
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << std::endl;
    }
    
    
}