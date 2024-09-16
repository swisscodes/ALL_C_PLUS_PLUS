#include <iostream>
using namespace std;

int main()
{
    auto char_pointer_type = "hello";
    auto a_character_type = 'a';
    auto int_type = 700;
    auto double_type = 700 + 2.0;

    std::cout << char_pointer_type << endl;
    std::cout << a_character_type << endl;
    std::cout << int_type << endl;
    std::cout << double_type << endl;

    std::cout << "second part" << endl;

    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)
    std::cout << a << endl;

    const int ci = i, &cr = ci;
    // cr = 99; //cant change constant

    auto b = ci;  // b is an int (top-level const in ci is dropped)
    b = 87; // we can change this because its a different variable of int on its own and now const

    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
    c = 99; // we can change this also because we just put the value of cr into a new auto value which is int

    auto d = &i;  // d is an int*(& of an int object is int*) auto makes this pointer
    auto e = &ci; // e is const int*(& of a const object is low-level const)
    auto &ff = ci; // ff is const int &reference because ci is const and have literal address on program
    
    //If we want the deduced type to have a top-level const, we must say so explicitly:
    const auto f = ci; // deduced type of ci is int; f has type const int

    const auto &j = 42; // ok: we can bind a const reference to a literal
    const int abc = 43;

    cout << &j << endl;

    const int ii = 42;
    auto jj = ii; const auto &k = ii; auto *p = &ii;
    cout << jj << " " << k << " " << p << endl;
    jj = 1;
    cout << jj << " " << k << " " << p << endl;
    const auto j2 = ii, &k2 = ii;


    return 0;
}
