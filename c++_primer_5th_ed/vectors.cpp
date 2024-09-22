#include <vector>
#include <string>
#include "header/Sales_item.h"
using std::string;
using std::vector;

int main()
{
    vector<int> ivec;             // ivec holds objects of type int
    vector<Sales_item> Sales_vec; // holds Sales_items
    vector<vector<string>> file;  // vector whose elements are vectors

    vector<string> test_many (5, "Hello");
    vector<string> test_many1 {"swiss", "bobo", "wow"};
    vector<string> test_many2 = {"swiss", "bobo", "wow"};

    unsigned int ok = 0;
    for (auto item : test_many)
    {

        ++ok;
        std::cout << ok << " " + item << std::endl;
    }

    vector<int> ivec2(ivec);    // copy elements of ivec into ivec2
    vector<int> ivec3 = ivec;   // copy elements of ivec into ivec3
    //vector<string> svec(ivec2);     // error: svec holds strings, not ints

    return 0;
}