#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book, book2;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book >> book2;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << book + book2 << std::endl;

    return 0;
}