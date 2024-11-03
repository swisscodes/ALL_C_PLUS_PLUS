#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>



int main()
{
    std::vector<std::string> vec;
    std::ifstream in("test2.txt");
    std::istream_iterator<std::string> line_iter(in), eof;
    std::ostream_iterator<std::string> out_iter(std::cout, "\n");
    

    while(line_iter != eof) {
        vec.push_back(*line_iter++);
    }
    for(auto out : vec) {
        out_iter++ = out;
    }


}