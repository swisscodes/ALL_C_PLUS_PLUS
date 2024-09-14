#include <iostream>
#include "Sales_item.h"

int main()
{
    typedef double wages; // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*


    // The new standard introduced a second way to define a type alias, via an alias declaration:

    
    using SI = Sales_item;  // SI is a synonym for Sales_item
    char a = 206;
    std::cout << a << std::endl;


    return 0;
}
