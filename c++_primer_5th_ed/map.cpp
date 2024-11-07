 #include <iostream>
 #include <string>
 #include <map>
 
 
 

 int main()
 {

 
    std::map<std::string, size_t> word_count; // empty map from string to size_t
    std::string word;
    while (std::cin >> word) {
        // inserts an element with key equal to word and value 1;
        //if word is already in word_count, insert does nothing
        auto ret = word_count.insert({word, 1});
        if(!ret.second)
            // word was already in word_count
            ++ret.first->second; // increment the counter
    }
 }