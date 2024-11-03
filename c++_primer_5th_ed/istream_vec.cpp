#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    std::istream_iterator<int> in_iter(std::cin), eof; // read ints from cin
    std::vector<int> vec(in_iter, eof);                // construct vec from an iterator range

    std::ostream_iterator<int> out_iter(std::cout, " ");

    for (auto a : vec)
    {
        *out_iter++ = a;
    }
    std::cout << std::endl;
    copy(vec.begin(), vec.end(), out_iter);
    std::cout << std::endl;
}